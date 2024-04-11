/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:53:25 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 18:23:40 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		const Brain *brain;
	public:
		~Cat(void);
		Cat(void);
		Cat(const Cat& src);
		Cat&	operator=(const Cat& src);
		void	makeSound(void) const;
};

#endif