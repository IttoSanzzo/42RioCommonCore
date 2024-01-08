/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:36:45 by gupiment	       #+#    #+#	      */
/*   Updated: 2024/01/08 05:29:25 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	minishell(t_mini *ms)
{
	while (1)
	{
		(void)ms;
//		ms_getcmd(ms, 1);
//		if (pop_cmd(ms) || !ms_builtin_switch(ms))
//			continue ;
//		mstester(ms);
	}
}

static void	ms_mini_init(t_mini *ms, int ac, char **av, char **ep)
{
	ms_get_mini(ms);
	ft_strcpy(ms->mendl, "> ");
	ms->prompt = NULL;
	ms->line = NULL;
	ms->cmdl = NULL;
	ms->paths = NULL;
	ms->ret = 0;
	ms->exit = 0;
	ms->vrt.ac = ac;
	ms->vrt.av = av;
	ms->vrt.ep = ep;
	ms->vex = NULL;
}

int	main(int ac, char **av, char **ep)
{
	t_mini	ms;

	ms_mini_init(&ms, ac, av, ep);
	while (ms.exit == 0)
	{
		ms_sig_init(&ms);
		signal(SIGINT, &ms_sigint);
//		signal(SIGQUIT, &ms_sigquit);
//		parse(&ms);
		minishell(&ms);
//		free_token(ms.start);
	}
	return (ms.ret);
}
