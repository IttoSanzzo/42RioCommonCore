/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:06:19 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 04:03:47 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->getName() << " is destructed!" << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap(100, 50, 20, "Mistake") {
	std::cout << "ScavTrap " << this->getName() << " is constructed!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 50, 20, name) {
	std::cout << "ScavTrap " << this->getName() << " is constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src.hitPoints, src.energyPoints, src.attackDamage, src.name) {
	std::cout << "ScavTrap copied " << src.name << " constructor called!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& src) {
	if (this != &src) {
		this->setName(src.getName());
		this->setHitPoints(src.getHitPoints());
		this->setEnergyPoints(src.getEnergyPoints());
		this->setAttackDamage(src.getAttackDamage());
	}
	return (*this);
}

void		ScavTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0 )
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << "ScavTrap " << this->getName() << " is out of energy!" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " is out of hit points!" << std::endl;
}

void		ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode!" << std::endl;
}