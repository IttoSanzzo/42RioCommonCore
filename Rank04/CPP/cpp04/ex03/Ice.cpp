/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:14:47 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 20:20:23 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::~Ice(void) {	
}

Ice::Ice(void) {
	this->AMateria::type = "ice";
}

Ice::Ice(const Ice& src) {
	this->type = src.type;
}

Ice&	Ice::operator=(const Ice& src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

AMateria*	Ice::clone(void) const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}