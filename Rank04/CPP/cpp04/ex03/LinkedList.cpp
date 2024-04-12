/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:35:43 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 21:44:15 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"
#include "AMateria.hpp"
#include "AMateriaNode.hpp"

LinkedList::~LinkedList(void){
	while (this->head != NULL)
		this->eraseLast();
};

LinkedList::LinkedList(void) : head(NULL) {
};

LinkedList::LinkedList(const LinkedList& src) {
	*this = src;
};

LinkedList&	LinkedList::operator=(const LinkedList& src) {
	if (this != &src)
		this->head = src.head;
	return (*this);
};

AMateriaNode* LinkedList::getLastNode(void) {
	AMateriaNode*	last = this->head;
	if (last == NULL)
		return (NULL);
	while (last->next != NULL)
		last = last->next;
	return last;
};

void LinkedList::addMateria(AMateria *item) {
	AMateriaNode*	newNode = new AMateriaNode(item);
	AMateriaNode*	lastNode;
	if (this->head != NULL) {
		lastNode = this->getLastNode();
		lastNode->next = newNode;
		newNode->prev = lastNode;
	}
	else
		this->head = newNode;
};

void LinkedList::eraseLast(void) {
	AMateriaNode*	lastNode = this->getLastNode();
	AMateriaNode*	retNode;
	if (lastNode->prev) {
		retNode = lastNode->prev;
		retNode->next = NULL;
		delete lastNode;
		return ;
	}
	delete lastNode;
	this->head = NULL;
};