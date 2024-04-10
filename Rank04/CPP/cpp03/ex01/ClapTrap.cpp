/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:22:02 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 00:54:53 by marcosv2         ###   ########.fr       */
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

void		ClapTrap::setName(std::string name) {
	this->name = name;
}

std::string	ClapTrap::getName(void){
	return (this->name);
}

void		ClapTrap::setHitPoints(int hitpts) {
	this->hitPoints = hitpts;
}

int			ClapTrap::getHitPoints(void){
	return (this->hitPoints);
}

void		ClapTrap::setEnergyPoints(int energypts) {
	this->energyPoints = energypts;
}

int			ClapTrap::getEnergyPoints(void){
	return (this->energyPoints);
}

void		ClapTrap::setAttackDamage(int attackdmg) {
	this->attackDamage = attackdmg;
}

int			ClapTrap::getAttackDamage(void){
	return (this->attackDamage);
}