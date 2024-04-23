/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_render.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:57:53 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/23 17:11:38 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	cb_render(t_data *data)
{
	cbd_clrc(cb_rgb(90, 90, 90));
	cbd_rect(data->ray.assets.c_cl, (int [2]){520, 0},
		(int [2]){476, 160});
	cbd_rect(data->ray.assets.f_cl, (int [2]){520, 160},
		(int [2]){476, 400});
	cbd_map();
	cb_check_moves(&data->ray);
	cb_calc_rays(data);
	cbd_pov();
	mlx_put_image_to_window(data->mlx.con, data->mlx.win, data->img.ptr, 0, 0);
	return (0);
}
