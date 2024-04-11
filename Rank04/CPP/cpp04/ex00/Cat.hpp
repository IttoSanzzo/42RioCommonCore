/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:53:25 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 17:12:29 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		~Cat(void);
		Cat(void);
		Cat(const Cat& src);
		Cat&	operator=(const Cat& src);
		void	makeSound(void) const;
};

#endif