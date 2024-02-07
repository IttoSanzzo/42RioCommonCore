/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 22:47:25 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/07 00:34:15 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_clear_fun(void) {
	if (CLEAR_FUN) {
		std::cout << C_LGREEN << MSS_CLEAR << C_DEF << "\033[8m\033[?25l";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << C_DEF << "\033[2J\033[H\033[?25h";
	}
}

std::string	add_info(std::string &info, const char *prompt, std::string &mss_color) {
	do {
		std::cout << mss_color << "[ADD] " << C_BLUE << prompt << C_DEF;
		std::getline(std::cin, info);
		if (info.empty()) {
			if (mss_color == C_ORANGE)
				mss_color = C_RED;
			std::cout << "\033[1F\033[0K";
		}
	} while (info.empty());
	if (mss_color != C_ORANGE)
		mss_color = C_ORANGE;
	return (info);
}

void	add_contact(PhoneBook &phonebook) {
	std::string mss_color = C_ORANGE;
	std::string info;
	Contact		contact;
	int			i;
	
	if (phonebook.GetCapacity() >= MAX_CAP)
		std::cout << C_YELLOW << "PhoneBook has no capacity! The oldest one will be replaced.\n" << C_DEF;
	i = phonebook.GetCapacity() % MAX_CAP;
	contact.SetFirstName(add_info(info, "Enter first name........: ", mss_color));
	contact.SetLastName(add_info(info, "Enter last name.........: ", mss_color));
	contact.SetNickname(add_info(info, "Enter nickname..........: ", mss_color));
	contact.SetPhoneNumber(add_info(info, "Enter phone number......: ", mss_color));
	contact.SetDarkestSecret(add_info(info, "Enter darkest secret....: ", mss_color));
	phonebook.SetContact(contact, i);
	phonebook.SetCapacity(phonebook.GetCapacity() + 1);
	std::cout << C_LGREEN << "Contact created!\n" << C_DEF;
}

static std::string	ft_truncate(std::string str) {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	ft_print_contact(Contact contact, int i) {
	std::cout << C_PURPLE << "[Entry " << i << "]" << C_BLUE << "First Name......: " << C_DEF << contact.GetFirstName() << std::endl;
	std::cout << C_PURPLE << "[Entry " << i << "]" << C_BLUE << "Last Name.......: " << C_DEF << contact.GetLastName() << std::endl;
	std::cout << C_PURPLE << "[Entry " << i << "]" << C_BLUE << "Nickname........: " << C_DEF << contact.GetNickname() << std::endl;
	std::cout << C_PURPLE << "[Entry " << i << "]" << C_BLUE << "Phone Number....: " << C_DEF << contact.GetPhoneNumber() << std::endl;
	std::cout << C_PURPLE << "[Entry " << i << "]" << C_BLUE << "Darkest Secret..: " << C_DEF << contact.GetDarkestSecret() << std::endl;
}

void	ft_put_contacts(PhoneBook &phonebook) {
	Contact	contact;
	std::cout << "|" << std::setw(FIELD_WIDTH) << "Index" << "|";
	std::cout << std::setw(FIELD_WIDTH) << "First Name" << "|";
	std::cout << std::setw(FIELD_WIDTH) << "Last Name" << "|";
	std::cout << std::setw(FIELD_WIDTH) << "Nickname" << "|\n";
	for (int i = 0; i < phonebook.GetCapacity() && i < MAX_CAP; i++) {
		contact = phonebook.GetContact(i);
		std::cout << "|" << std::setw(FIELD_WIDTH) << i + 1 << "|";
		std::cout << std::setw(FIELD_WIDTH) << ft_truncate(contact.GetFirstName()) << "|";
		std::cout << std::setw(FIELD_WIDTH) << ft_truncate(contact.GetLastName()) << "|";
		std::cout << std::setw(FIELD_WIDTH) << ft_truncate(contact.GetNickname()) << "|\n";
	}
}

void	ft_cin_fail(void) {
	std::cin.clear();
	std::cin.ignore(512, '\n');
	return ;
}

bool	check_index(std::string &index) {
	if (!std::isdigit(index[0]) && index[0] != '+' && index[0] != '-')
		return (std::cout << C_RED << "Invalid input!\n" << C_DEF, true);
	for (size_t i = 1; i < index.length(); i++)
		if (!std::isdigit(index[i]))
			return (std::cout << C_RED << "Invalid input!\n" << C_DEF, true);
	return (false);
}

void	search_contact(PhoneBook &phonebook) {
	std::string	index;
	int			i;

	if (phonebook.GetCapacity() == 0) {
		std::cout << C_RED << "There is no contacts to show!\n" << C_DEF;
		return ;
	}
	ft_put_contacts(phonebook);
	do {
		std::cout << C_ORANGE << "[SEARCH] " << C_BLUE << "Enter index: " << C_DEF;
		std::getline(std::cin, index);
		if (index.empty())
			std::cout << "\033[1F\033[0K";
	} while (index.empty());
	if (check_index(index))
		return ;
	i = std::atoi(index.c_str());
	if (i < 1 || i > MAX_CAP)
		std::cout << C_RED << "Index is out of range!\n" << C_DEF;
	else
		ft_print_contact(phonebook.GetContact(i - 1), i);
}