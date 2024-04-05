/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 23:04:59 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/04 23:20:28 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon(void) {
}

const std::string& 	Weapon::getType(void) {
	return (this->type);
}

void	Weapon::setType(std::string newType) {
	this->type = newType;
}