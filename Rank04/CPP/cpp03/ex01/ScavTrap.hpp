/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:00:09 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 01:19:52 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:
		ScavTrap(void);
	public:
		~ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& src);
		ScavTrap&	operator=(ScavTrap& src);
		void		attack(const std::string& target);
		void		guardGate(void);
};

#endif