/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbd_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:42:41 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/22 16:56:27 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	cbd_point(int color, int s, int x, int y)
{
	static t_data	*data;
	int	iy;
	int	ix;
	int	div;

	if (data == NULL)
		data = cb_get_data(NULL);
	div = s / 2;
	iy = (y - div) - 1;
	while (++iy < (y + div))
	{
		ix = (x - div) - 1;
		while (++ix < (x + div))
		{
			if ((ix == (x - div) || ix == (x + div))
			 || (iy == (y - div) || iy == (y + div)))
				cb_ipp(&data->img, 0, ix, iy);
			else
				cb_ipp(&data->img, color, ix, iy);
		}
	}
}
