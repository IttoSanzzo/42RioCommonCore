/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChumps.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:21:56 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/22 14:22:27 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name) {
	Zombie	z = Zombie(name);
	z.announce();
}