/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:43:41 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/19 19:24:06 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	cb_pov_o_switch(char c, int *pvo)
{
	if (c == 'N')
		*pvo = 0;
	else if (c == 'E')
		*pvo = 1;
	else if (c == 'S')
		*pvo = 2;
	else if (c == 'W')
		*pvo = 3;
}

static void	cb_get_pov(char **map, int *pvx, int *pvy, int *pvo)
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
				if (*pvo != -1)
					cb_error(ERR_MSS_MSP);
				cb_pov_o_switch(map[y][x], pvo);
				*pvy = y + 1;
				*pvx = x + 1;
				map[y][x] = '0';
			}
		}
	}
	if (*pvo == -1)
		cb_error(ERR_MSS_NSP);
}

static void	cb_check_map_chars(char **map)
{
	int	y;
	int	x;

	y = -1;
	while (map[++y])
	{
		x = -1;
		while (map[y][++x])
		{
			if (!ft_strchr(MAP_VALID, map[y][x]))
				cb_error(ERR_MSS_IMO);
		}
	}
}

void	cb_parse_map(t_data *data)
{
	cb_check_map_chars(data->parse.layout);
	cb_get_pov(data->parse.layout, &data->map.pvx,
		&data->map.pvy, &data->map.pvo);
	cb_layout_to_map(data->parse.layout, &data->map);
}
