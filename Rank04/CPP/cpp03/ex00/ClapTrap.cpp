/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:22:02 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/09 22:49:06 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name) {
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& src) {
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
}

ClapTrap&	ClapTrap::operator=(ClapTrap& src) {
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0 )
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	else if (this->energyPoints == 0)
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " is out of hit points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->energyPoints > 0 && this->hitPoints) {
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	}
	else if (this->energyPoints == 0)
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " is out of hit points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0 && this->hitPoints) {
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
	}
	else if (this->energyPoints == 0)
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " is out of hit points!" << std::endl;
}