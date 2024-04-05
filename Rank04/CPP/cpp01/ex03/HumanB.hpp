/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 23:21:15 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/04 23:34:59 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanB {
	private:
		std::string	name;
		Weapon*		weapon;
	public:
	HumanB(std::string name);
	~HumanB(void);
	void	setWeapon(Weapon& weapon);
	void	attack(void);
};

#endif