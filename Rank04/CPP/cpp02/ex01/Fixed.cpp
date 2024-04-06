/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:27:54 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/06 04:21:42 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->fp_value = 0;
}

Fixed::Fixed(const int raw) {
	std::cout << "Int constructor called" << std::endl;
	this->fp_value = raw << this->fr_bits;
}

Fixed::Fixed(const float raw) {
	std::cout << "Float constructor called" << std::endl;
	this->fp_value = roundf(raw * (1 << this->fr_bits));
}

Fixed::Fixed(const Fixed& fix) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
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
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->fp_value);
}

float	Fixed::toFloat(void) const {
	return (roundf((float)this->fp_value) / (1 << this->fr_bits));
}

int		Fixed::toInt(void) const {
	return (this->fp_value >> this->fr_bits);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fix) {
	out << fix.toFloat();
	return (out);
}