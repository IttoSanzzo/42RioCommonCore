/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:08:02 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 20:12:21 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		~Cure(void);
		Cure(void);
		Cure(const Cure& src);
		Cure&		operator=(const Cure& src);
		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif