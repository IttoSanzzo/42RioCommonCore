/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:11:54 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 04:14:52 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	{FragTrap	frag;}
	FragTrap	fragtrap("Fragtrap");
	FragTrap	frag(fragtrap);
	fragtrap.attack("Handsome Jack");
	fragtrap.takeDamage(2);
	fragtrap.beRepaired(2);
	fragtrap.highFivesGuys();
	return 0;
}