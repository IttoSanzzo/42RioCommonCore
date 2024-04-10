/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:11:54 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 02:06:14 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	{
		ClapTrap clap;
		clap.takeDamage(1);
	}
	ClapTrap claptrap("Claptrap");
	claptrap.attack("Handsome Jack");
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.beRepaired(2);
	claptrap.beRepaired(2);
	claptrap.attack("Handsome Jack");
	claptrap.attack("Handsome Jack");
	claptrap.attack("Handsome Jack");
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.beRepaired(2);
	return (0);
}