/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaNode.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:29:34 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 21:44:18 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIANODE_HPP
# define AMATERIANODE_HPP

#include "AMateria.hpp"

class AMateriaNode {
	public:
		AMateria*		content;
		AMateriaNode*	prev;
		AMateriaNode*	next;
		~AMateriaNode(void);
		AMateriaNode(void);
		AMateriaNode(AMateria* item);
		AMateriaNode(const AMateriaNode& src);
		AMateriaNode&	operator=(const AMateriaNode& src);
};

#endif