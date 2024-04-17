/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:52:09 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/17 09:26:11 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain(void) {
	std::cout << "Brain default destructor called!" << std::endl;
}

Brain::Brain(void) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Spaghetti ideas";
	std::cout << "Brain default constructor called!" << std::endl;
}

Brain::Brain(const Brain& src) {
	for(int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	std::cout << "Brain copy constructor called!" << std::endl;
}

Brain&	Brain::operator=(const Brain& src) {
	if (this != &src)
		for(int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	return (*this);
}