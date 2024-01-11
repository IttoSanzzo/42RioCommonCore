/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:36:45 by gupiment	       #+#    #+#	      */
/*   Updated: 2024/01/11 06:36:12 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static void	minishell(t_mini *ms)
{
	int	i;

	i = -1;
	while (ms->vex && ms->vex[++i])
	{
//		ms_vex_finish(ms, ms->vex[i])
		if (ms->vex && !(ms_builtins_switch(ms->vex[i])))
//			ms_exec_vex((t_vars *)ms->vex[i]);
//		ms_reset_fds(ms);
		if (ms->sig.sint || ms->sig.squit || !ms->vex)
			break ;
	}
}

static void	ms_mini_init(t_mini *ms, int ac, char **av, char **ep)
{
	ms_get_mini(ms);
	ms->altprompt = NULL;
	ms->prompt = NULL;
	ms->line = NULL;
	ms->cmdl = NULL;
	ms->paths = NULL;
	ms->ret = 0;
	ms->exit = 0;
	ms->vrt.ac = ac;
	ms->vrt.av = av;
	ms->vrt.ep = ft_tabdup(ep);
	ms->vex = NULL;
}

int	main(int ac, char **av, char **ep)
{
	t_mini	ms;

	ms_mini_init(&ms, ac, av, ep);
	signal(SIGINT, &ms_sigint);
	while (ms.exit == 0)
	{
		ms_sig_init(&ms);
		ms_parse(&ms);
		minishell(&ms);
	}
	return (ms.ret);
}
