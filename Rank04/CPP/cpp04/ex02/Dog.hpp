/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:53:25 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 18:37:24 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain	*brain;
	public:
		~Dog(void);
		Dog(void);
		Dog(const Dog& src);
		Dog&	operator=(const Dog& src);
		void	makeSound(void) const;
};

#endif