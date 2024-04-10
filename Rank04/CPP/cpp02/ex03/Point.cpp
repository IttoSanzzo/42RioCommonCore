/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:31:44 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/09 21:40:10 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::~Point(void){}

Point::Point(void): x(Fixed(0)), y(Fixed(0)){}

Point::Point(Point const& point) {
	*this = point;
}

Point::Point(float const fx, float const fy) : x(Fixed(fx)), y(Fixed(fy)){}

Point&	Point::operator=(Point const& point) {
	const_cast<Fixed&>(this->x) = point.getX();
	const_cast<Fixed&>(this->y) = point.getY();
	return (*this);
}

Fixed	Point::getX() const {
	return ((Fixed)this->x);
}

Fixed	Point::getY() const {
	return ((Fixed)this->y);
}