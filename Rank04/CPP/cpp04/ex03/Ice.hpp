/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:08:02 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 20:13:46 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		~Ice(void);
		Ice(void);
		Ice(const Ice& src);
		Ice&		operator=(const Ice& src);
		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif