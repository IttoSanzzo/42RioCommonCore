/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:34:22 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/05 23:43:49 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Constructors and Destructor

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string darkest_secret) 
	: first_name(first_name), last_name(last_name), nickname(nickname),
	phone_number(phone_number), darkest_secret(darkest_secret) {				
}

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

// Setters

void		Contact::SetFirstName(std::string first_name) {
	this->first_name = first_name;
}

void		Contact::SetLastName(std::string last_name) {
	this->last_name = last_name;
}

void		Contact::SetNickname(std::string nickname) {
	this->nickname = nickname;
}

void		Contact::SetPhoneNumber(std::string phone_number) {
	this->phone_number = phone_number;
}

void		Contact::SetDarkestSecret(std::string darkest_secret) {
	this->darkest_secret = darkest_secret;
}

// Getters

std::string	Contact::GetFirstName(void) const {
	return (this->first_name);
}

std::string	Contact::GetLastName(void) const {
	return (this->last_name);
}

std::string	Contact::GetNickname(void) const {
	return (this->nickname);
}

std::string	Contact::GetPhoneNumber(void) const {
	return (this->phone_number);
}

std::string	Contact::GetDarkestSecret(void) const {
	return (this->darkest_secret);
}