/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:06:19 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 02:28:53 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << this->getName() << " is destructed!" << std::endl;
}

FragTrap::FragTrap(void) : ClapTrap("Mistake") {
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " is constructed!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " is constructed!" << std::endl;
}

FragTrap::FragTrap(FragTrap &src) : ClapTrap(src){
	*this = src;
}

FragTrap&	FragTrap::operator=(FragTrap& src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	return (*this);
}

void		FragTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0 )
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << "FragTrap " << this->getName() << " is out of energy!" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is out of hit points!" << std::endl;
}

void		FragTrap::highFivesGuys(void) {
	std::cout << "Hey guys, Up High, Down Low! FragTrap " << this->getName() << " offers a high five!" << std::endl;
}