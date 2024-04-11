/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:38:35 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 20:43:36 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	inventory[4];	
	public:
		~MateriaSource(void);
		MateriaSource(void);
		MateriaSource(const MateriaSource& src);
		MateriaSource&	operator=(const MateriaSource& src);
		void	learnMateria(AMateria*) = 0;
		AMateria*	createMateria(std::string const & type);
};

#endif