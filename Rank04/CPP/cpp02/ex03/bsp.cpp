/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:23:26 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/09 21:54:58 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	area(Point const a, Point const b, Point const c) {
	Fixed area = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
	if (area < 0)
		return (area * Fixed(-1.0f));
	return (area / Fixed(2.0f));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	total_area = area(a, b, c);
	Fixed	area1 = area(point, b, c);
	Fixed	area2 = area(a, point, c);
	Fixed	area3 = area(a, b, point);
	return (total_area == (area1 + area2 + area3));
}