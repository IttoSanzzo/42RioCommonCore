/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtins.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/12 14:43:29 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/12 14:59:35 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

int	ms_builtins(t_mini *ms)
{
	if (ms->cmdl[0])
	{
		if (!ft_strncmp(ms->cmdl[0], "exit", 5))
			ms_exit(ms);
		if (!ft_strncmp(ms->cmdl[0], "pwd", 4))
			return (ms_printpwd(ms));
	}
	return (1);
}
