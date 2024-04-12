/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:58:29 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/12 01:22:42 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class	AMateria;

class ICharacter {
	public:
		virtual ~ICharacter(void);
		virtual std::string const	&getName(void) = 0;
		virtual void	equip(AMateria* mat) = 0;
		virtual void	unequip(int	index) = 0;
		virtual void	use(int index, ICharacter& target) = 0;
};

#endif