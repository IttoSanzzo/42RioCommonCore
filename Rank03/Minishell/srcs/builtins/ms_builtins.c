/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtins.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/12 14:43:29 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/23 21:59:18 by gupiment         ###   ########.fr       */
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
		if (!ft_strncmp(ms->cmdl[0], "cat", 4))
			return (ms_cat(ms));
		if (!ft_strncmp(ms->cmdl[0], "cd", 3))
			return (ms_cd(ms));
		if (!ft_strncmp(ms->cmdl[0], "echo", 5))
			return (ms_echo(ms->cmdl));
	}
	return (1);
}
