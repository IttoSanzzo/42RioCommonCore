/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/27 16:50:42 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/27 17:52:08 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "fractol.h"

double	scale_map(double u_num, double n_min, double n_max, double o_max)
{
	return ((n_max - n_min) * u_num / o_max + n_min);
}

t_cnu	sum_c(t_cnu z1, t_cnu z2)
{
	t_cnu	res;

	res.x = z1.x + z2.x;
	res.y = z1.y + z2.y;
	return (res);
}

t_cnu	sqr_c(t_cnu z)
{
	t_cnu	res;

	res.x = (z.x * z.x) - (z.y * z.y);
	res.y = 2 * z.x * z.y;
	return (res);
}
