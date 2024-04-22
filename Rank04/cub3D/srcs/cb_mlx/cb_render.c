/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_render.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:57:53 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/22 01:57:28 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void cb_check_moves(t_ray *ray)
{
	if (ray->keys.k_r == 1)
	{
		ray->pva += 0.1;
		if (ray->pva > 2 * PI)
			ray->pva -= 2 * PI;
		ray->pdx = cos(ray->pva) * 5;
		ray->pdy = sin(ray->pva) * 5;
	}
	if (ray->keys.k_l == 1)
	{
		ray->pva -= 0.1;
		if (ray->pva < 0)
			ray->pva += 2 * PI;
		ray->pdx = cos(ray->pva) * 5;
		ray->pdy = sin(ray->pva) * 5;
	}
	if (ray->keys.k_d == 1)
		ray->pvx += 0.2;
	if (ray->keys.k_a == 1)
		ray->pvx -= 0.2;
	if (ray->keys.k_w == 1)
		ray->pvy -= 0.2;
	if (ray->keys.k_s == 1)
		ray->pvy += 0.2;
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
