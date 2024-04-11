/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:55:48 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 18:39:47 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat(void) {
	delete this->brain;
	std::cout << "Cat default destructor called!" << std::endl;
}

Cat::Cat(void) {
	this->Animal::type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called!" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	this->Animal::type = src.type;
	this->brain = new Brain(*src.brain);
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat&	Cat::operator=(const Cat& src) {
	if (this != &src) {
		this->type = src.type;
		this->brain = src.brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Miau Miau" << std::endl;
}