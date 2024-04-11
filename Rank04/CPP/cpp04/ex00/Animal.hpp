/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:38:30 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 17:11:56 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string	type;
	public:
		virtual	~Animal(void);
		Animal(void);
		Animal(const Animal& src);
		Animal&	operator=(const Animal& src);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif