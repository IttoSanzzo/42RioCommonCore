/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:25:57 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 17:31:04 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string	type;
	public:
		~WrongAnimal(void);
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& src);
		WrongAnimal&	operator=(const WrongAnimal& src);
		void			makeSound(void) const;
		std::string		getType(void) const;
};

#endif