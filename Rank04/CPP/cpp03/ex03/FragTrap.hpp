/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:00:09 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/10 04:54:28 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
	public:
		~FragTrap(void);
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		FragTrap&	operator=(const FragTrap& src);
		void		attack(const std::string& target);
		void		highFivesGuys(void);
		int			getHp(void) const;
		int			getAd(void) const;
};

#endif