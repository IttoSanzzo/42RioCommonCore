/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbd_rect.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:41:03 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/22 00:42:13 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	cbd_rect(int color, int x, int y, int width, int high)
{
	static t_data	*data;
    int	i;
    int j;

	if (data == NULL)
		data = cb_get_data(NULL);
    i = y - 1;
    while (++i < y + high)
    {
        j = x - 1;
        while (++j < x + width)
            cb_ipp(&data->img, j, i, color);
	}
}
