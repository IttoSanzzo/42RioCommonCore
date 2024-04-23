/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:49:00 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/22 20:04:34 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	cb_move(t_ray *ray, int vd, int hd)
{
	float	angle;

	angle = ray->pva + PI;
	ray->pvx += vd * K_MS * cos(angle) + hd * K_MS * sin(angle);
	ray->pvy += vd * K_MS * sin(angle) - hd * K_MS * cos(angle);
}

void	cb_check_moves(t_ray *ray)
{
	if (ray->keys.k_r == 1)
	{
		ray->pva += K_LS;
		if (ray->pva > 2 * PI)
			ray->pva -= 2 * PI;
		ray->pdx = cos(ray->pva) * 5;
		ray->pdy = sin(ray->pva) * 5;
	}
	if (ray->keys.k_l == 1)
	{
		ray->pva -= K_LS;
		if (ray->pva < 0)
			ray->pva += 2 * PI;
		ray->pdx = cos(ray->pva) * 5;
		ray->pdy = sin(ray->pva) * 5;
	}
	if (ray->keys.k_w + ray->keys.k_s != 0
		|| ray->keys.k_d + ray->keys.k_a != 0)
		cb_move(ray,
			ray->keys.k_s + ray->keys.k_w, ray->keys.k_d + ray->keys.k_a);
}
