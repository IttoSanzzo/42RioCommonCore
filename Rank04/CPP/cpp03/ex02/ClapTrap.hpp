/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:14:53 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 02:08:59 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
		~ClapTrap(void);
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& src);
		ClapTrap&		operator=(ClapTrap& src);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			setName(std::string name);
		std::string		getName(void);
		void			setHitPoints(int hitpts);
		int				getHitPoints(void);
		void			setEnergyPoints(int energypts);
		int				getEnergyPoints(void);
		void			setAttackDamage(int attackdmg);
		int				getAttackDamage(void);
};

#endif