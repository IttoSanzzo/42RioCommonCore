/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 14:38:29 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/08 13:58:03 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	ms_free_cmd(t_mini *ms)
{
//	int	i;

//	i = -1;
	free(ms->line);
//	free(ms->cmd);
//	if (ms->cmd)
//	{
//		while (ms->cmd[++i])
//			ft_printf("Word..: |%s|\n", ms->cmd[i]);
		if (ms->cmd && ms->cmd[0])
			ft_printf("Word..: |%s|\n", ms->cmd[0]);
//			free(ms->cmd[i]);
//		free(ms->cmd);
//	}
}

void	ms_exit(t_mini *ms)
{
	ft_putstr(EXT_MSS);
	ms_free_cmd(ms);
	exit(EXT_SUC);
}
