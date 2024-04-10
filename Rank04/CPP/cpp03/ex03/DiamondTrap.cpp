/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 02:31:31 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 04:59:55 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {
	this->name = "Mistake";
	this->ClapTrap::name = this->name + "_clap_name";
	this->hitPoints = this->FragTrap::getHp();
	this->energyPoints = this->ScavTrap::getEp();
	this->attackDamage = this->FragTrap::getAd();
	std::cout << "DiamondTrap " << this->name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
	this->name = name;
	this->ClapTrap::name = this->name + "_clap_name";
	this->hitPoints = this->FragTrap::getHp();
	this->energyPoints = this->ScavTrap::getEp();
	this->attackDamage = this->FragTrap::getAd();
	std::cout << "DiamondTrap " << this->name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), FragTrap(src), ScavTrap(src) {
	this->name = src.name;
	this->ClapTrap::name = this->getName() + "_clap_name";
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	std::cout << "DiamondTrap " << src.name << " copy contructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src) {
	if (this != &src) {
		this->name = src.name;
		this->ClapTrap::name = src.ClapTrap::name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
		std::cout << "DiamondTrap " << src.name << " copy contructor called" << std::endl;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string &target) {
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "I am " << this->name <<", and my ClapTrap is " << this->ClapTrap::name << std::endl;
}