/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_walls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 23:06:14 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/23 16:31:02 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

// static void	cb_walltex(t_inf *inf, int y, float ty)
// {
	// inf->color = inf->text->addr[(32 * (int)ty) + ];
// }

	#define P1 0x000000
	#define P0 0xffffff

void	cb_walls(t_ray *ray, t_inf *inf)
{
	float	ca;
	int		lineh;
	int		lineo;
	float	ty_st;
	float	ty_of;
	float	ty;
	float	tx;
	int		y;

	/*
	int		texttt[] = {
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,

		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,

		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,
		P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0,

		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
		P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1, P0,P0,P0,P0,P0,P0,P0,P0, P1,P1,P1,P1,P1,P1,P1,P1,
	};
	*/

	// ft_printf("len: %d\n", inf->text->line_len);

	cb_upt_r(&ca, ray->pva - inf->ra);
	inf->dist *= cos(ca);
	lineh = (MAP_S * WALL_S) / inf->dist;
	ty_st = 32.0 / (float)lineh;
	ty_of = 0;
	if (lineh > WALL_S)
	{
		ty_of = (lineh - WALL_S) / 2.0;
		lineh = WALL_S;
	}
	lineo = 160 - (lineh>>1);
	ty = ty_of * ty_st;
	tx = (int)(inf->rx / 2.0) % 32;
	y = -1;
	while (++y < lineh)
	{
		//cb_walltex(inf, y, ty);
		// inf->color = inf->text->addr[(32 * (int)ty) + (int)tx];
		// inf->color = texttt[(32 * (int)ty) + (int)tx];
		inf->color = cb_gpc(inf->text, (int)tx, 32 * (int)ty);
		cbd_point(inf->color, 8, inf->r * 8 + 530, y + lineo);
		ty += ty_st;
	}
}
