/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:16:43 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/17 20:53:23 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	cb_free_all(t_data *data)
{
	ft_nfreetab(&(data->map.layout));
	ft_nfreestr(&(data->tx.no_t));
	ft_nfreestr(&(data->tx.ea_t));
	ft_nfreestr(&(data->tx.so_t));
	ft_nfreestr(&(data->tx.we_t));
}

void	cb_exit(int exit_value)
{
	cb_free_all(cb_get_data(NULL));
	exit (exit_value);
}
