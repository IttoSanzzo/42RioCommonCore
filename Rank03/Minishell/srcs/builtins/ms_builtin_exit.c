/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_exit.c                                  :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 14:38:29 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/08 03:14:27 by marcosv2         ###   ########.fr       */
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

int	ms_builtin_exit(t_mini *ms)
{
	ft_putstr(EXT_MSS);
	ms_free_cmd(ms);
	free(ms->vex->path);
	free(ms->vex->av);
	free(ms->prompt);
	ft_rl_clear_history();
	ft_freetab(ms->vrt.ep);
	exit(EXIT_SUCC);
	return (0);
}
