/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:25:09 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/06 05:29:12 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {
	private:
		int					fp_value;
		static const int	fr_bits = 8;
	public:
		~Fixed(void);
		Fixed(void);
		Fixed(const int raw);
		Fixed(const float raw);
		Fixed(const Fixed& fix);
		Fixed&	operator=(const Fixed& fix);
		bool	operator>(const Fixed& fix);
		bool	operator<(const Fixed& fix);
		bool	operator>=(const Fixed& fix);
		bool	operator<=(const Fixed& fix);
		bool	operator==(const Fixed& fix);
		bool	operator!=(const Fixed& fix);
		Fixed	operator+(const Fixed& fix);
		Fixed	operator-(const Fixed& fix);
		Fixed	operator*(const Fixed& fix);
		Fixed	operator/(const Fixed& fix);
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed&	min(Fixed& first, Fixed& second);
		static Fixed&	min(const Fixed& first, const Fixed& second);
		static Fixed&	max(Fixed& first, Fixed& second);
		static Fixed&	max(const Fixed& first, const Fixed& second);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fix);

#endif