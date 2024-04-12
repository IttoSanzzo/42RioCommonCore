/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:14:47 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 20:19:05 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::~Cure(void) {	
}

Cure::Cure(void) {
	this->AMateria::type = "cure";
}

Cure::Cure(const Cure& src) : AMateria(src) {
}

Cure&	Cure::operator=(const Cure& src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

AMateria*	Cure::clone(void) const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}