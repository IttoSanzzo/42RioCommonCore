/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:00:09 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 02:18:48 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	private:
	public:
		~FragTrap(void);
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap& src);
		FragTrap&	operator=(FragTrap& src);
		void		attack(const std::string& target);
		void		highFivesGuys(void);
};

#endif