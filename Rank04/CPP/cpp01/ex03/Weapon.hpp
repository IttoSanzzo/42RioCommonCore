/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 23:05:11 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/04 23:18:37 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
 
#include <string>

class	Weapon {
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string&	getType(void);
		void				setType(std::string newType);
};
 
#endif