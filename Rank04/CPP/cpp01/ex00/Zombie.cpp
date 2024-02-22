/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:06:43 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/22 13:40:16 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "Destructing " << name << std::endl;
}
void	Zombie::announce() {
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}