/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:26:31 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 17:31:40 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(void) {
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	this->type = src.type;
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "(WrongAnimal sounds)" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}