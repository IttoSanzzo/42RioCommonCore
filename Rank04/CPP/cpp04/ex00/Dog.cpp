/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:55:48 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 17:21:16 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog(void) {
	std::cout << "Dog default destructor called!" << std::endl;
}

Dog::Dog(void) {
	this->Animal::type = "Dog";
	std::cout << "Dog default constructor called!" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	this->Animal::type = src.type;
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog&	Dog::operator=(const Dog& src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof Woof" << std::endl;
}