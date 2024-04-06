/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:27:54 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/06 02:54:51 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->fp_value = 0;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed& fix) {
	std::cout << "Copy constructor called" << std::endl;
	this->fp_value = fix.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed& fix) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fp_value = fix.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fp_value = raw;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fp_value);
}