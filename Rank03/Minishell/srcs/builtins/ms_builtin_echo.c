/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_echo.c                                  :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 02:12:44 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/08 02:12:55 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

int	ms_builtin_echo(t_mini *ms)
{
	int	flag;
	int	i;

	i = 0;
	flag = 0;
	if (ms->cmdl[1] && !ft_strncmp(ms->cmdl[1], "-n", 3) && ++i)
		flag = 1;
	while (ms->cmdl[++i])
	{
		ft_putstr(ms->cmdl[i]);
		if (ms->cmdl[i + 1])
			ft_putchar(' ');
	}
	if (!flag)
		ft_putchar('\n');
	return (0);
}
