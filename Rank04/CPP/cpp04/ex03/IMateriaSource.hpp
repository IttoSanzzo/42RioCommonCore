/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:34:36 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/12 01:28:26 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual 			~IMateriaSource(void);
		virtual void		learnMateria(AMateria* mat) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;
};

#endif