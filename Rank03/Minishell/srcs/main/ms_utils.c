/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_utils.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 02:31:02 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/11 01:28:58 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

t_mini	*ms_get_mini(t_mini *ms)
{
	static t_mini	*save;

	if (ms)
		save = ms;
	return (save);
}

void	ms_freeall(void)
{
	t_mini	*ms;

	ms = ms_get_mini(NULL);
	ms_free_cmd(ms);
	ms_free_vex(ms);
	ft_nfreestr(&ms->prompt);
	ft_nfreetab(&ms->vrt.ep);
	ft_nfreetab(&ms->hdoc.docs);
}
