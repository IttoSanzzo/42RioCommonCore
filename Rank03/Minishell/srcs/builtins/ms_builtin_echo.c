/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_echo.c                                  :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/23 21:49:49 by gupiment	       #+#    #+#	      */
/*   Updated: 2024/01/07 02:15:55 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static	int	nb_ms(char **ms)
{
	int		size;

	size = 0;
	while (ms[size])
		size++;
	return (size);
}

int	ms_builtin_echo(char **ms)
{
	int		i;
	int		n_option;

	i = 1;
	n_option = 0;
	if (nb_ms(ms) > 1)
	{
		while (ms[i] && ft_strncmp(ms[i], "-n", 3) == 0)
		{
			n_option = 1;
			i++;
		}
		while (ms[i])
		{
			ft_putstr_fd(ms[i], 1);
			if (ms[i + 1] && ms[i][0] != '\0')
				write(1, " ", 1);
			i++;
		}
	}
	if (n_option == 0)
		write(1, "\n", 1);
	return (0);
}
