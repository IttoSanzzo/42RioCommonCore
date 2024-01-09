/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:36:45 by gupiment	       #+#    #+#	      */
/*   Updated: 2024/01/09 01:37:11 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	minishell(t_mini *ms)
{
	int	i;

	i = 0;
	while (1)
	{
		ft_printc(C_CYAN, "String..:%s %s\n", C_WHITE, ms->line);
		if (ms_builtins_switch((t_vars *)ms->vex[i]))
			break ;
		if (ms->sig.sint || ms->sig.squit || !ms->vex
			|| (t_vars *)ms->vex[++i] == NULL)
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
	ms->p = 0;
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
