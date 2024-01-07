/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/12 19:50:01 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/26 01:47:28 by marcosv2         ###   ########.fr       */
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
		newpath = ft_strdup(ms->homepath);
		if (ms->cmdl[1])
			newpath = ft_sujoin(newpath, &ms->cmdl[0][2]);
	}
	else
	{
		newpath = ft_strdup(ms_getpwd(ms));
		newpath = ft_sujoin(newpath, ms->cmdl[1]);
	}
	return (newpath);
}

int	ms_cd(t_mini *ms)
{
	int		i;
	char	*newpath;

	newpath = ms_gen_newpath(ms);
	i = -1;
	if (ms_check_newpath(newpath))
	{
		while (ms->rt.ep[++i])
			if (!ft_strncmp(ms->rt.ep[i], "PWD=", 4))
			{
				free(ms->rt.ep[i]);
				ms->rt.ep[i] = ft_strjoin("PWD=", newpath);
				break ;
			}
	}
	else
	{
		ft_putstr_fd(CDERR_A, 2);
		ft_putstr_fd(ms->ex.av[1], 2);
		ft_putstr_fd(CDERR_B, 2);
	}
	free(newpath);
	return (0);
}
