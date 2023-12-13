/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:36:45 by gupiment	       #+#    #+#	      */
/*   Updated: 2023/12/12 20:55:22 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	ms_getcmd(t_mini *ms)
{
	ms_free_cmd(ms);
	ms->line = ft_readline(ms->prompt);
	ms->cmdl = ft_split(ms->line, ' ');
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

void	mini_init(t_mini *ms, char **ep)
{
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
	while (ms->ex.av[++i])
		ft_printf("Argumento %d..: |%s|\n", i, ms->ex.av[i]);
	ft_printf("path..: |%s|\n", ms->ex.path);
	execve(ms->ex.path, ms->ex.av, ms->ex.ep);
}

void	minishell(t_mini *ms)
{
	while (1)
	{
		ms_getcmd(ms);
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
