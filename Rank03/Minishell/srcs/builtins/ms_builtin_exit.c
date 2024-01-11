/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_exit.c                                  :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 14:38:29 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/11 03:15:18 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	ms_free_vex(t_mini *ms)
{
	int	i;

	if (ms->vex)
	{
		i = -1;
		while (ms->vex[++i])
		{
			ft_nfreestr(&ms->vex[i]->path);
			ft_nfreestr(&ms->vex[i]->hdoc);
			ft_nfreetab(&ms->vex[i]->av);
			ft_nfreetab(&ms->vex[i]->ep);
			ft_nfree((void *)&ms->vex[i]);
		}
		ft_nfree((void *)&ms->vex);
	}
}

void	ms_free_cmd(t_mini *ms)
{
	ft_nfreestr(&ms->line);
	ft_nfreetab(&ms->cmdl);
}

void	ms_exec_exit(void)
{
	ms_freeall();
	ft_rl_clear_history();
	exit(EXIT_SUCC);
}

void	ms_endlexit(void)
{
	ft_putchar('\n');
	ms_builtin_exit(NULL);
}

int	ms_builtin_exit(t_vars *vex)
{
	(void)vex;
	ms_freeall();
	ft_rl_clear_history();
	ft_putstr(EXIT_MSS);
	exit(EXIT_SUCC);
	return (0);
}
