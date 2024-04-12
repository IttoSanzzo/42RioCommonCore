/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:21:35 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/12 01:12:53 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "LinkedList.hpp"
#include <string>

class Character : public ICharacter {
	private:
		std::string	name;
		AMateria*	inventory[4];
		static LinkedList	floor;
		static void	drop_materia(LinkedList& floor, AMateria *item);
	public:
		virtual	~Character(void);
		Character(void);
		Character(const std::string name);
		Character(const Character& src);
		Character&	operator=(const Character& src);
		std::string const	&getName(void);
		void	equip(AMateria* mat);
		void	unequip(int index);
		void	use(int index, ICharacter& target);
};

#endif