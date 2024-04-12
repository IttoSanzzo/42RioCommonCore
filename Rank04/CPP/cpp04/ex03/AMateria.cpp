/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:43:59 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/12 02:31:03 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::~AMateria(void) {
}

AMateria::AMateria(void) : type("undefined") {
}

AMateria::AMateria(std::string const &type) : type(type) {
}

AMateria::AMateria(const AMateria& src) : type(src.type) {
}

AMateria& AMateria::operator=(const AMateria& src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string const &	AMateria::getType(void) const {
	return (this->type);
}

void	AMateria::use(ICharacter& target) {
	(void)target;
}