/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:41:13 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/22 14:20:49 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void) {
	Zombie	*zp = newZombie("Chariot");
	
	zp->announce();
	randomChump("Mari");
	delete zp;
	return (0);
}