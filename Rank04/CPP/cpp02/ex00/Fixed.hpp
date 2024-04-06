/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:25:09 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/06 02:54:31 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
	private:
		int	fp_value;
		static const int	fr_bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed& fix);
		Fixed&	operator=(const Fixed& fix);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
};

#endif