/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtins.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/12 14:43:29 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/07 02:18:51 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

int	ms_builtin_switch(t_mini *ms)
{
	if (ms->cmdl[0])
	{
		if (!ft_strncmp(ms->cmdl[0], "echo", 5))
			return (ms_builtin_echo(ms->cmdl));
		if (!ft_strncmp(ms->cmdl[0], "cd", 3))
			return (ms_builtin_cd(ms));
		if (!ft_strncmp(ms->cmdl[0], "pwd", 4))
			return (ms_builtin_pwd(ms));
		if (!ft_strncmp(ms->cmdl[0], "export", 7))
			return (ms_builtin_export(ms));
		if (!ft_strncmp(ms->cmdl[0], "unset", 6))
			return (ms_builtin_unset(ms));
		if (!ft_strncmp(ms->cmdl[0], "env", 4))
			return (ms_builtin_env(ms->rt.ep));
		if (!ft_strncmp(ms->cmdl[0], "exit", 5))
			return (ms_builtin_exit(ms, 1));
	}
	return (1);
}
