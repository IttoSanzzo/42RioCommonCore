/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:11:54 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 01:19:47 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	{ScavTrap	scav("test");}
	ScavTrap	scavtrap("Scavtrap");
	ScavTrap	scav(scavtrap);
	scavtrap.attack("Handsome Jack");
	scavtrap.takeDamage(2);
	scavtrap.beRepaired(2);
	scavtrap.guardGate();
	return 0;
}