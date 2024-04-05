/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 23:27:43 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/04 23:42:05 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
	this->name = name;
}

HumanA::~HumanA(void) {
}

void	HumanA::setWeapon(Weapon& weapon) {
	this->weapon = weapon;
}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}