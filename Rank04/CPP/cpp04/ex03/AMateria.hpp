/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:57:48 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/12 01:32:16 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class	ICharacter;

class AMateria {
	protected:
		std::string	type;
	public:
		virtual	~AMateria(void);
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria& src);
		AMateria&	operator=(const AMateria& src);
		std::string const&	getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif