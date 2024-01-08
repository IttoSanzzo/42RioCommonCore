/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:36:45 by gupiment	       #+#    #+#	      */
/*   Updated: 2024/01/08 07:26:25 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	minishell(t_mini *ms)
{
//	while (1)
//	{
		(void)ms;
//	}
}

static void	ms_mini_init(t_mini *ms, int ac, char **av, char **ep)
{
	ms_get_mini(ms);
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
