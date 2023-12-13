/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 14:38:29 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/12 20:54:31 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	ms_free_cmd(t_mini *ms)
{
	int	i;

	i = -1;
	free(ms->line);
	if (ms->cmdl)
	{
		while (ms->cmdl[++i])
			free(ms->cmdl[i]);
		free(ms->cmdl);
	}
}

void	ms_exit(t_mini *ms)
{
	ft_putstr(EXT_MSS);
	ms_free_cmd(ms);
	free(ms->ex.path);
	free(ms->ex.av);
	free(ms->prompt);
	ft_freetab(ms->rt.ep);
	exit(EXT_SUC);
}
