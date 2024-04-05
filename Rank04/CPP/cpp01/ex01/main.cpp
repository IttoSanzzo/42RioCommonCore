/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:44:05 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/04 21:15:17 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void) {
	Zombie	*zb = newZombie("Chariot");
	
	zb->announce();
	randomChump("Mari");
	delete (zb);
	return (0);
}