/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:27:56 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 21:44:20 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_HPP
# define LINKEDLIST_HPP

#include "AMateria.hpp"
#include "AMateriaNode.hpp"

class LinkedList{
	private:
		AMateriaNode*	head;
		AMateriaNode*	getLastNode();
	public:
		~LinkedList(void);
		LinkedList(void);
		LinkedList(const LinkedList& src);
		LinkedList&	operator=(const LinkedList& src);
		void	addMateria(AMateria *item);
		void	eraseLast(void);
};

#endif