/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_mlx_events.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:42:20 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/20 16:18:32 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static int	cb_close(int ret)
{
	cb_exit(ret);
	return (ret);
}

int	cb_hand_keys(int keysym, t_data *data)
{

	(void)data;
	if (keysym == XK_Escape)
			cb_close(0);
	/*
	else if (keysym == XK_Left)
		data->shift_x -= (MOVE_X * data->zoom);
	else if (keysym == XK_Right)
		data->shift_x += (MOVE_X * data->zoom);
	else if (keysym == XK_Down)
		data->shift_y -= (MOVE_Y * data->zoom);
	else if (keysym == XK_Up)
		data->shift_y += (MOVE_Y * data->zoom);
	else if (keysym == XK_equal)
		data->quality += ZOOM_KY;
	else if (keysym == XK_minus)
		data->quality -= ZOOM_KY;
	*/
//	cb_render(data);
	return (0);
}

void     cb_mlx_events_init(t_data *data, t_mlx *mlx)
{
	mlx_hook(mlx->win, KeyPress, KeyPressMask, cb_hand_keys, data);
	mlx_hook(mlx->win, DestroyNotify, StructureNotifyMask, cb_close, 0);
}