/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 23:27:43 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/04 23:35:01 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::~HumanB(void) {
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void	HumanB::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}