/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:36:45 by gupiment	       #+#    #+#	      */
/*   Updated: 2023/12/08 19:51:01 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	get_cmd(t_mini *ms)
{
	ms_free_cmd(ms);
	ms->line = ft_readline(PROMPT);
	ms->cmd = ft_split(ms->line, ' ');
}

void	mini_init(t_mini *ms, char **envp)
{
	ms->env = envp;
	ms->line = ft_calloc(1, 1);
	ms->cmd = NULL;
	ms->exit = 0;
	ms->ret= 0;
}

void	minishell(t_mini *ms)
{
	while (1)
	{
		get_cmd(ms);
		if (ms->cmd[0] && !ft_strncmp(ms->cmd[0], "exit", 5))
			ms_exit(ms);
	}
}

int	main(int argc, char **argv, char **envp)
{
	t_mini	ms;

	(void) argc;
	(void) argv;
	mini_init(&ms, envp);
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
