/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbd_pov.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:53:39 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/22 00:56:54 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	cbd_pov(void)
{
	static t_data	*data;

	if (data == NULL)
		data = cb_get_data(NULL);
	cbd_point(cb_rgb(255, 255, 0), data->ray.pvx, data->ray.pvy, 8);
}
