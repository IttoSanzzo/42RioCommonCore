/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:36:45 by gupiment	       #+#    #+#	      */
/*   Updated: 2023/12/08 13:47:33 by marcosv2         ###   ########.fr       */
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
}

int	main(int argc, char **argv, char **envp)
{
	t_mini	ms;

	(void) argc;
	(void) argv;
	mini_init(&ms, envp);


//int	i;

	while (1)
	{
		get_cmd(&ms);
		ft_printf("Line.: |%s|\n", ms.line);
//		i = -1;
//		while (ms.cmd[++i])
//		{
//			ft_printf("Word..: |%s|\n", ms.cmd[i]);
//			free(ms.cmd[i]);
//		}
//		free(ms.cmd);
		if (!ft_strncmp(ms.line, "exit", 5))
			ms_exit(&ms);
	}
	return (0);
}
