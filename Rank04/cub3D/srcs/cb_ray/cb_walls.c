/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_walls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 23:06:14 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/23 11:40:52 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	cb_walls(t_data *data, t_ray *ray, t_inf *inf)
{
	float	ca;
	float	lineh;
	float	lineo;

	ca = ray->pva - inf->ra;
	if (ca < 0)
		ca += 2 * PI;
	if (ca > 2 * PI)
		ca -= 2 * PI;
	inf->dist *= cos(ca);
	lineh = (MAP_S * WALL_S) / inf->dist;
	if (lineh > WALL_S)
		lineh = WALL_S;
	lineo = 160 - lineh / 2;
	cbd_sline(cb_rgb(255, 0, 0), 8, (int [2]){inf->r * 8 + 530, lineo},
		(int [2]){inf->r * 8 + 530, lineh + lineo});
	(void)data;
}
