/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:57:18 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/06 22:48:23 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void) {
	PhoneBook	phonebook;
	std::string	command = "";

	while (true) {
		std::cout << C_GREEN << MSS_INPUT << C_BLUE << MSS_CMD << C_DEF;
		std::getline(std::cin, command);
		if (command == CMD_EXIT)
			break ;
		else if (command == CMD_ADD)
			add_contact(phonebook);
		else if (command == CMD_SEARCH)
			search_contact(phonebook);
		else {
			if (command.empty())
				std::cout << C_RED << MSS_EMPTY << command << std::endl << C_DEF;
			else
				std::cout << C_RED << MSS_INVALID << command << std::endl << C_DEF;
		}
		ft_clear_fun();
	}
	return (0);
}