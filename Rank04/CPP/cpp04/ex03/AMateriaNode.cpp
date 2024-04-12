/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaNode.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:31:50 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 21:35:23 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "AMateriaNode.hpp"

AMateriaNode::~AMateriaNode(void) {
	if (this->content != NULL)
		delete this->content;
};

AMateriaNode::AMateriaNode(void): content(NULL),prev(NULL), next(NULL) {	
};

AMateriaNode::AMateriaNode(AMateria * item): content(item), prev(NULL),next(NULL) {
};

AMateriaNode::AMateriaNode(const AMateriaNode& src) {
	*this = src;
};

AMateriaNode&	AMateriaNode::operator=(const AMateriaNode& src) {
	if (this != &src) {
		this->prev = src.prev;
		this->content = src.content;
		this->next = src.next;
	}
	return (*this);
};