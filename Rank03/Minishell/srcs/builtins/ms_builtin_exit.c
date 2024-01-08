/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_exit.c                                  :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 14:38:29 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/08 07:57:11 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	ms_free_cmd(t_mini *ms)
{
	ft_nfreestr(&ms->line);
	ft_nfreetab(&ms->cmdl);
}

static void	ms_free_vex(t_mini *ms)
{
	if (ms->vex)
	{
		ft_nfreestr(&ms->vex->path);
		ft_nfreetab(&ms->vex->av);
		ft_nfreetab(&ms->vex->ep);
		ft_nfree((void *)&ms->vex);
	}
}

int	ms_builtin_exit(t_mini *ms)
{
	ms_free_cmd(ms);
	ms_free_vex(ms);
	ft_nfreestr(&ms->prompt);
	ft_nfreetab(&ms->vrt.ep);
	ft_rl_clear_history();
	ft_putstr(EXT_MSS);
	exit(EXIT_SUCC);
	return (0);
}
