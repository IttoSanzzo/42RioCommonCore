/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:28:52 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/17 09:10:24 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat::WrongCat(void) {
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
	this->type = src.type;
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}