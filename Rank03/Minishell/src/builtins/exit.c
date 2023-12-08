/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 14:38:29 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/08 14:13:00 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	ms_free_cmd(t_mini *ms)
{
	int	i;

	i = -1;
	free(ms->line);
	if (ms->cmd)
	{
		while (ms->cmd[++i])
			free(ms->cmd[i]);
		free(ms->cmd);
	}
}

void	ms_exit(t_mini *ms)
{
	ft_putstr(EXT_MSS);
	ms_free_cmd(ms);
	exit(EXT_SUC);
}
