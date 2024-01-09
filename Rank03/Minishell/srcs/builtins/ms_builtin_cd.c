/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_cd.c                                    :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/12 19:50:01 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/09 04:28:44 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static int	ms_check_newpath(char *newpath)
{
	(void)newpath;
	return (1);
}

static char	*ms_gen_newpath(t_mini *ms)
{
	char	*newpath;

	if (!ms->cmdl[1] || (ms->cmdl[1]
			&& !ft_strncmp(ms->cmdl[1], "~/", 2)))
	{
		newpath = ft_strdup(ms_home());
		if (ms->cmdl[1])
			newpath = ft_sujoin(&newpath, &ms->cmdl[0][2]);
	}
	else
	{
		newpath = ft_strdup(ms_pwd());
		newpath = ft_sujoin(&newpath, ms->cmdl[1]);
	}
	return (newpath);
}

static void	ms_cd_err(t_vars *vex)
{
	ft_putstr_fd(CD_ERR_A, STDERR);
	ft_putstr_fd(vex->av[1], STDERR);
	ft_putstr_fd(CD_ERR_B, STDERR);
}

int	ms_builtin_cd(t_vars *vex)
{
	int		i;
	char	*newpath;
	t_mini	*ms;

	ms = ms_get_mini(NULL);
	newpath = ms_gen_newpath(ms);
	i = -1;
	if (ms_check_newpath(newpath))
	{
		while (ms->vrt.ep[++i])
		{
			if (!ft_strncmp(ms->vrt.ep[i], "PWD=", 4))
			{
				free(ms->vrt.ep[i]);
				ms->vrt.ep[i] = ft_strjoin("PWD=", newpath);
				break ;
			}
		}
	}
	else
		ms_cd_err(vex);
	free(newpath);
	return (0);
}
