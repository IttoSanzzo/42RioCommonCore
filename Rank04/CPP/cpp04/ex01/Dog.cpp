/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:55:48 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 18:39:15 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog(void) {
	delete this->brain;
	std::cout << "Dog default destructor called!" << std::endl;
}

Dog::Dog(void) {
	this->Animal::type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called!" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	this->Animal::type = src.type;
	this->brain = new Brain(*src.brain);
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog&	Dog::operator=(const Dog& src) {
	if (this != &src) {
		this->type = src.type;
		this->brain = src.brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof Woof" << std::endl;
}