/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_echo.c                                  :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/23 21:49:49 by gupiment	       #+#    #+#	      */
/*   Updated: 2024/01/07 02:45:35 by marcosv2         ###   ########.fr       */
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
