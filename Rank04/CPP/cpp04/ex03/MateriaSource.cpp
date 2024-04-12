/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:51:10 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/12 02:30:59 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
			delete (this->inventory[i]);
}

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
		if (src.inventory[i] != NULL)
			this->inventory[i] = src.inventory[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i] != NULL)
				delete (this->inventory[i]);
			this->inventory[i] = NULL;
			if (src.inventory[i] != NULL)
				this->inventory[i] = src.inventory[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* mat) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == NULL) {
			this->inventory[i] = mat;
			return ;
		}
	}
	if (mat != NULL)
		delete (mat);
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] != NULL)
			if (this->inventory[i]->getType() == type)
				return (this->inventory[i]->clone());
	}
	return (0);
}