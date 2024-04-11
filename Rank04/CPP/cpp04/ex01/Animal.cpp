/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:44:34 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 16:52:24 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal(void) {
	std::cout << "Default animal destructor called!" << std::endl;
}

Animal::Animal(void) {
	this->Animal::type = "Animal";
	std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal(const Animal& src) {
	this->type = src.type;
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal&	Animal::operator=(const Animal& src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "(Animal sounds)" << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->type);
}