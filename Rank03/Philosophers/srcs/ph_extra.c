/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_extra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:58:37 by marcosv2          #+#    #+#             */
/*   Updated: 2024/01/21 17:57:16 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	input_checker(char **argv)
{
	int	i;
	int	j;

	i = -1;
	while (argv[++i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == ' ')
				j++;
			if ((argv[i][j] < 48 || argv[i][j] > 57))
				return (ph_error(ERR_IN_1, NULL));
			j++;
		}
	}
	return (0);
}
