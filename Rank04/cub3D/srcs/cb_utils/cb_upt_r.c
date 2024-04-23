/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_upt_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:52:11 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/23 12:56:25 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	cb_upt_r(float *r, float upt)
{
	*r = upt;
	if (*r < 0)
		*r += 2 * PI;
	if (*r > 2 * PI)
		*r -= 2 * PI;
}
