/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_layout_to_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:12:55 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/19 19:24:04 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static int	cb_get_max_len(char **tab)
{
	int	i;
	int	il;
	int	tl;

	tl = 0;
	i = -1;
	while (tab[++i])
	{
		il = ft_strlen(tab[i]);
		if (tl < il)
			tl = il;
	}
	return (tl);
}

static void	cb_create_map_base(char **tab, t_map *map)
{
	int	y;
	int	x;
	int	yl;
	int	xl;

	yl = ft_tablen(tab) + 3;
	xl = cb_get_max_len(tab) + 3;
	map->layout = ft_calloc(yl, sizeof(int *));
	y = -1;
	while (++y < yl - 1)
		map->layout[y] = ft_calloc(xl, sizeof(int));
	y = -1;
	while (++y < yl - 1)
	{
		x = -1;
		while (++x < xl - 1)
			map->layout[y][x] = -1;
		map->layout[y][x] = -2;
	}
}

static void	cb_overwrite(char **tab, t_map *map)
{
	int	x;
	int	y;

	y = -1;
	while (tab[++y])
	{
		x = -1;
		while (tab[y][++x])
			map->layout[y + 1][x + 1] = tab[y][x] - '0';
	}
}

static void	cb_check_open(int **map)
{
	int	y;
	int	x;

	y = -1;
	while (map[++y])
	{
		x = -1;
		while (map[y][++x] != -2)
		{
			if (map[y][x] == 0 && (map[y - 1][x] == -1
				|| map[y + 1][x] == -1
				|| map[y][x - 1] == -1
				|| map[y][x + 1] == -1))
				cb_error(ERR_MSS_OWL);
		}
	}
}

void	cb_layout_to_map(char **tab, t_map *map)
{
	cb_create_map_base(tab, map);
	cb_overwrite(tab, map);
	cb_check_open(map->layout);
}
