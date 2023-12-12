/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:36:45 by gupiment	       #+#    #+#	      */
/*   Updated: 2023/12/12 16:50:07 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	get_cmd(t_mini *ms)
{
	ms_free_cmd(ms);
	ms->line = ft_readline(PROMPT);
	ms->cmdl = ft_split(ms->line, ' ');
}

void	mini_init(t_mini *ms, char **ep)
{
	ms->rt.ep = ep;
	ms->line = ft_calloc(1, 1);
	ms->ex.path = ft_calloc(1, 1);
	ms->cmdl = NULL;
	ms->exit = 0;
	ms->ret = 0;
}



/*void	ms_pop_exec(t_mini *ms)
{
	
}*/

void	mstester(t_mini *ms)
{
	free(ms->ex.path);
	ms->ex.path = ft_strjoin(ms_getpwd(ms), "/");
	ms->ex.path = ft_rejoin(ms->ex.path, ms->cmdl[0]);
	execve(ms->ex.path, ms->ex.av, ms->ex.ep);
}

void	minishell(t_mini *ms)
{
	while (1)
	{
		get_cmd(ms);
		if (!ms_builtins(ms))
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
