/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:54:27 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/17 20:54:42 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	main(int ac, char *av[])
{
	t_data	data;

	if (ac != 2)
		return (ft_putstr_fd(ERR_MSS_N, 2), ft_putstr_fd(ERR_MSS_AC, 2), 1);
	cb_base_init(&data);
	cb_arguments(&data, av[1]);
	cb_exit(0);
}
