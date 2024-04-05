/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 23:21:15 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/04 23:42:09 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanA {
	private:
		std::string	name;
		Weapon&		weapon;
	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);
	void	setWeapon(Weapon& weapon);
	void	attack(void);
};

#endif