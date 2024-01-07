/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_pwd.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/12 14:42:40 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/07 02:18:22 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

char	*ms_getpwd(t_mini *ms)
{
	int	i;

	i = -1;
	while (ms->rt.ep[++i])
		if (!ft_strncmp(ms->rt.ep[i], "PWD=", 4))
			return ((char *)&ms->rt.ep[i][4]);
	return (NULL);
}

int	ms_builtin_pwd(t_mini *ms)
{
	ft_printf("%s\n", ms_getpwd(ms));
	return (0);
}
