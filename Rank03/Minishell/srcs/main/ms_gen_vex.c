/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_gen_vex.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/11 03:28:15 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/11 03:44:52 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static int	ms_vc(char **cmdl)
{
	int	i;
	int	vc;

	if (!cmdl)
		return (0);
	i = -1;
	vc = 0;
	while (cmdl[++i])
		if (ms_is_token(cmdl[i]) == 1)
			vc++;
	return (vc);
}

static void	ms_vex_split(t_mini *ms)
{
	int	vc;

	vc = ms_vc(ms->cmdl);
	ft_printc(C_GOLDEN, "VC..: %d", vc);
}

void	ms_gen_vex(t_mini *ms)
{
	ms_vex_split(ms);
}
