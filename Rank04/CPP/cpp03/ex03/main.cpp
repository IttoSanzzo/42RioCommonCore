/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:11:54 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 04:36:47 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	{DiamondTrap	d1;}
	std::cout << "\nPart 1\n" << std::endl;
	{
	DiamondTrap d;
	std::cout << std::endl;
	DiamondTrap a( "XD" );
	std::cout << std::endl;
	DiamondTrap b( "Alfonso" );
	std::cout << std::endl;
	d = b;
	std::cout << std::endl;
	d.attack("Me");
	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;
	}
	std::cout << "\nPart 2\n" << std::endl;
	{
	DiamondTrap	d1("Crazy");
    DiamondTrap	d2(d1);
    DiamondTrap	d3 = d1;

    d1.whoAmI();
    d2.whoAmI();
    d3 = d1;
    d3.whoAmI();

    d1.attack("Handsome Jack");
    d1.takeDamage(10);
    d1.beRepaired(10);
	}

	return (0);
}