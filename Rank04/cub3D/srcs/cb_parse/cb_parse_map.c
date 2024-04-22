/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:43:41 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/22 01:45:48 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	cb_pov_o_switch(char c, float *pva)
{
	if (c == 'N')
		*pva = 0;
	else if (c == 'E')
		*pva = 1;
	else if (c == 'S')
		*pva = 2;
	else if (c == 'W')
		*pva = 3;
}

static void	cb_get_pov(char **map, float *pvx, float *pvy, float *pva)
{
	int	y;
	int	x;

	y = -1;
	while (map[++y])
	{
		x = -1;
		while (map[y][++x])
		{
			if (ft_strchr(POV_ORIEN, map[y][x]))
			{
				if (*pva != -1)
					cb_error(ERR_MSS_MSP);
				cb_pov_o_switch(map[y][x], pva);
				*pvy = (y + 1) * MAP_S - (MAP_S / 2);
				*pvx = (x + 1) * MAP_S - (MAP_S / 2);
				map[y][x] = '0';
			}
		}
	}
	if (*pva == -1)
		cb_error(ERR_MSS_NSP);
}

static void	cb_check_map_chars(char **ray)
{
	int	y;
	int	x;

	y = -1;
	while (ray[++y])
	{
		x = -1;
		while (ray[y][++x])
		{
			if (!ft_strchr(MAP_VALID, ray[y][x]))
				cb_error(ERR_MSS_IMO);
		}
	}
}

void	cb_parse_map(t_data *data)
{
	cb_check_map_chars(data->parse.layout);
	cb_get_pov(data->parse.layout, &data->ray.pvx,
		&data->ray.pvy, &data->ray.pva);
	cb_layout_to_map(data->parse.layout, &data->ray);
}
