/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:25:56 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/06 21:13:19 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Constructors and Destructor

PhoneBook::PhoneBook(void)
	: capacity(0) {
	for (int i = 0; i < MAX_CAP; i++)
		this->contacts[i] = Contact();
}

PhoneBook::~PhoneBook(void) {
}

// Setters

void	PhoneBook::SetCapacity(int capacity) {
	this->capacity = capacity;
}

void	PhoneBook::SetContact(Contact contact, int i) {
	this->contacts[i] = contact;
}

// Getters

int		PhoneBook::GetCapacity(void) const {
	return (this->capacity);
}

Contact	PhoneBook::GetContact(int i) const {
	return (this->contacts[i]);
}