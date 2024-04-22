/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_render.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:57:53 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/22 18:43:25 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	cb_move(t_ray *ray, int vd, int hd)
{
	float	angle;

	angle = ray->pva + (1 * PI);
	ray->pvx += vd * K_MS * cos(angle) + hd * K_MS * sin(angle);
	ray->pvy += vd * K_MS * sin(angle) - hd * K_MS * cos(angle);
}

static void cb_check_moves(t_ray *ray)
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

int	cb_render(t_data *data)
{
	cbd_clrc(cb_rgb(100, 100, 100));
	cbd_map();
	cb_check_moves(&data->ray);
	cbd_pov();
	mlx_put_image_to_window(data->mlx.con, data->mlx.win, data->img.ptr, 0, 0);
	return (0);
}
