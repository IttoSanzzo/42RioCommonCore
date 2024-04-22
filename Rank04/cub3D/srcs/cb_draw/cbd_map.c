/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbd_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 01:15:26 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/22 01:40:59 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	cbd_map(void)
{
	static t_data	*data;
	int	x;
	int	y;
	int	xo;
	int	yo;

	if (data == NULL)
		data = cb_get_data(NULL);
	y = 0;
	while (++y < data->ray.mly - 1)
	{
		x = 0;
		while (++x < data->ray.mlx - 1)
		{
			xo = (x - 1) * MAP_S;
			yo = (y - 1) * MAP_S;
			if (data->ray.layout[y][x] == -1)
				continue ;
			if (data->ray.layout[y][x] == 0)
				cbd_rect(cb_rgb(1, 1, 1), xo + 1, yo + 1, MAP_S - 1, MAP_S - 1);
			else
				cbd_rect(cb_rgb(255, 255, 255), xo + 1, yo + 1, MAP_S - 1, MAP_S - 1);
		}
	}
}
