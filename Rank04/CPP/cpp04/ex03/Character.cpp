/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:52:01 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/12 02:30:55 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character(void) {
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
			delete (this->inventory[i]);
}

Character::Character(void) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name = "Undefined";
}

Character::Character(std::string name) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name = name;
}

Character::Character(const Character& src) {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
		if (src.inventory[i] != NULL)
			this->inventory[i] = src.inventory[i]->clone();
	}
	this->name = src.name;
}

Character&	Character::operator=(const Character& src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i] != NULL)
				delete (this->inventory[i]);
			this->inventory[i] = NULL;
			if (src.inventory[i] != NULL)
				this->inventory[i] = src.inventory[i]->clone();
		}
		this->name = src.name;
	}
	return (*this);
}

std::string const	&Character::getName(void) {
	return (this->name);
}

void	Character::equip(AMateria* mat) {
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] == NULL) {
			this->inventory[i] = mat;
			return ;
		}
	if (mat != NULL)
		delete (mat);
}

LinkedList Character::floor = LinkedList();

void	Character::unequip(int index) {
	if ((index >= 0 && index <= 3) && this->inventory[index] != NULL) {
		drop_materia(this->floor, this->inventory[index]);
		this->inventory[index] = NULL;
	}
}

void	Character::use(int index, ICharacter& target) {
	if ((index >= 0 && index <= 3) && this->inventory[index] != NULL)
		this->inventory[index]->use(target);
}


void Character::drop_materia(LinkedList& floor, AMateria *item){
	floor.addMateria(item);
};