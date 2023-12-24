/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:36:45 by gupiment	       #+#    #+#	      */
/*   Updated: 2023/12/24 02:35:34 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	ms_getcmd(t_mini *ms, int opt)
{
	if (opt == 1)
	{
		ms_free_cmd(ms);
		ms->line = ft_readline(ms->prompt);
		if (ms->line[0] == '\0')
		{
			free(ms->line);
			ft_putstr("\n");
			ms->line = ft_strdup("exit");
		}
	}
	if (opt == 2)
		ms->line = ft_rejoin(ms->line, ft_readline(NULL));
	if (!ft_open_quotes(ms->line, '"'))
		ms->cmdl = ft_splitq(ms->line, '"');
	else
		ms_getcmd(ms, 2);
}

char	*ms_getuser(t_mini *ms)
{
	int	i;

	i = -1;
	while (ms->rt.ep[++i])
		if (!ft_strncmp(ms->rt.ep[i], "USER=", 5))
			return ((char *)&ms->rt.ep[i][5]);
	return (NULL);
}

char	*ms_gethome(t_mini *ms)
{
	int	i;

	i = -1;
	while (ms->rt.ep[++i])
		if (!ft_strncmp(ms->rt.ep[i], "HOME=", 5))
			return ((char *)&ms->rt.ep[i][5]);
	return (NULL);
}

void	ms_setprompt(t_mini *ms)
{
	ms->prompt = ft_strjoin(PURPLE, ms_getuser(ms));
	ms->prompt = ft_rejoin(ms->prompt, GOLDEN);
	ms->prompt = ft_rejoin(ms->prompt, "$ ");
	ms->prompt = ft_rejoin(ms->prompt, WHITE);
}

t_mini	*get_mini(t_mini *base)
{
	static t_mini	*ms;

	if (base == NULL)
		return (ms);
	ms = base;
	return (base);
}

void	mini_init(t_mini *ms, char **ep)
{
	get_mini(ms);
	ms->pid = getpid();
	ms->df.ep = ep;
	ms->rt.ep = ft_tabcpy(ms->df.ep);
	ms_setprompt(ms);
	ms->line = ft_calloc(1, 1);
	ms->homepath = ms_gethome(ms);
	ms->ex.path = ft_calloc(1, 1);
	ms->ex.av = (char **)ft_calloc(1, 1);
	ms->cmdl = NULL;
	ms->exit = 0;
	ms->ret = 0;
	signal(SIGINT, ms_sigint);
}

int	ms_is_div(char *s)
{
	if (!ft_strncmp(s, ";", 2)
		|| !ft_strncmp(s, "|", 2)
		|| !ft_strncmp(s, "<<", 3)
		|| !ft_strncmp(s, ">>", 3))
		return (1);
	return (0);
}

char	*ms_parname(char *path)
{
	int	i;

	i = ft_strlen(path) - 1;
	while (i >= 1 && path[i - 1] != '/')
		i--;
	return ((char *)&path[i]);
}

int	pop_cmd(t_mini *ms)
{
	int	i;

	if (ms->cmdl[0] && ft_strncmp(ms->cmdl[0], "\n", 2))
	{
		free(ms->ex.path);
		if (!ft_strncmp(ms->cmdl[0], "~/", 2))
		{
			ms->ex.path = ft_strjoin(ms->homepath, "/");
			ms->ex.path = ft_rejoin(ms->ex.path, &ms->cmdl[0][2]);
		}
		else
		{
			ms->ex.path = ft_strjoin(ms_getpwd(ms), "/");
			ms->ex.path = ft_rejoin(ms->ex.path, ms->cmdl[0]);
		}
		ms->ex.ac = 1;
		while (ms->cmdl[ms->ex.ac] && !ms_is_div(ms->cmdl[ms->ex.ac]))
			ms->ex.ac++;
		free(ms->ex.av);
		ms->ex.av = (char **)ft_calloc((2 + ms->ex.ac), sizeof(char *));
		ms->ex.av[0] = ms_parname(ms->ex.path);
		i = 0;
		while (++i <= ms->ex.ac)
		ms->ex.av[i] = (char *)&ms->cmdl[i][0];
		return (0);
	}
	return (1);
}

void	mstester(t_mini *ms)
{
	int	i = -1;

	while (ms->rt.ep[++i] && ft_strncmp(ms->rt.ep[i], "PATH=", 5))
		i++;
	ms->paths = ft_split(ms->rt.ep[i], ':');
	i = -1;
	while (ms->paths[++i])
	{
		ms->paths[i] = ft_rejoin(ms->paths[i], "/");
		ms->paths[i] = ft_rejoin(ms->paths[i], ms->ex.av[0]);
	}
	i = -1;
	while (ms->ex.av[++i])
		ft_printf("Argumento %d..: |%s|\n", i, ms->ex.av[i]);
	i = -1;
	ft_printf("path..: |%s|\n", ms->ex.path);
	if (fork() == 0)
	{
		ft_printf("EXECVE TRY\n");
		while (ms->paths[++i])
			execve(ms->paths[i], ms->ex.av, ms->ex.ep);
		execve(ms->ex.path, ms->ex.av, ms->ex.ep);
		ft_printf("minishell: %s: command not found\n", ms->ex.av[0]);
		exit(0);
		ms_exit(ms, 2);
	}
	ft_freetab(ms->paths);
	wait(NULL);
}

void	minishell(t_mini *ms)
{
	while (1)
	{
		ms_getcmd(ms, 1);
		if (pop_cmd(ms) || !ms_builtins(ms))
			continue ;
		mstester(ms);
	}
}

int	main(int ac, char **av, char **ep)
{
	t_mini	ms;

	(void) ac;
	(void) av;
	ms.ex.av = av;
	ms.ex.ep = ep;
	mini_init(&ms, ep);
	while (ms.exit == 0)
	{
		sig_init(&ms);
//		parse(&ms);
//		if (ms.start != NULL && check_line(&ms, ms.start))
//		signal(SIGINT, &ms_sigint);
//		signal(SIGQUIT, &ms_sigquit);
		minishell(&ms);
//		free_token(ms.start);
	}
//	ms_free_env();
//	ms_free_env();
	return (ms.ret);
}
