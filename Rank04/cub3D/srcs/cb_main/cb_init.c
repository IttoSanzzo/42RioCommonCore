/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:31:47 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/19 10:57:01 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	cb_texture_init(t_data *data)
{
	data->tx.f_set = 0;
	data->tx.c_set = 0;
	data->tx.f_cl[0] = 0;
	data->tx.f_cl[1] = 0;
	data->tx.f_cl[2] = 0;
	data->tx.c_cl[0] = 0;
	data->tx.c_cl[1] = 0;
	data->tx.c_cl[2] = 0;
	data->tx.no_t = NULL;
	data->tx.ea_t = NULL;
	data->tx.so_t = NULL;
	data->tx.we_t = NULL;
}

static void	cb_map_init(t_data *data)
{
	data->map.layout = NULL;
	data->map.pov_s[0] = 0;
	data->map.pov_s[1] = 0;
	data->map.pov_o = 0;
}

void	cb_base_init(t_data *data)
{
	data->mlx.state = 0;
	data->parse.elements = NULL;
	data->parse.import = NULL;
	data->parse.layout = NULL;
	cb_get_data(data);
	cb_texture_init(data);
	cb_map_init(data);
}
