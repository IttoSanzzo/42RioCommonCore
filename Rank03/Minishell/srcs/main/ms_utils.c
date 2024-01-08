/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_utils.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 02:31:02 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/08 03:15:03 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	ms_gen_prompt(t_mini *ms)
{
	ms->prompt = ft_strjoin(C_PURPLE, ft_getarg(ms->vrt.ep, "USER="));
	ms->prompt = ft_sujoin(ms->prompt, C_GOLDEN);
	ms->prompt = ft_sujoin(ms->prompt, "$ ");
	ms->prompt = ft_sujoin(ms->prompt, C_WHITE);
}

t_mini	*ms_get_mini(t_mini *ms)
{
	static t_mini	*save;

	if (ms)
		save = ms;
	return (save);
}
