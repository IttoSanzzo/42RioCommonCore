/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:50:44 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/07 00:35:07 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_MAIN_HPP
# define CPP00_MAIN_HPP

# include "PhoneBook.hpp"
# include <iostream>
# include <iomanip>
# include <limits>
# include <cstdlib>
#ifndef CPP00_STRING
# define CPP00_STRING
# include <string>
#endif

// Miscs
# define FIELD_WIDTH	10
# ifndef CLEAR_FUN
# 	define CLEAR_FUN	0
# endif
// Messages
# define MSS_CLEAR		"Press \"enter\" to go back..."
# define MSS_INPUT		"[INPUT] "
# define MSS_CMD		"Enter Command$ "
# define MSS_INVALID	"Invalid Command..: "
# define MSS_EMPTY		"Empty Command!"
// Commands
# define CMD_EXIT		"EXIT"
# define CMD_ADD		"ADD"
# define CMD_SEARCH		"SEARCH"
// Colors
# define C_DEF			"\033[0m"
# define C_BLUE			"\033[38;5;45m"
# define C_GREEN		"\033[38;5;46m"
# define C_LGREEN		"\033[38;5;49m"
# define C_PURPLE		"\033[38;5;93m"
# define C_RED			"\033[38;5;196m"
# define C_YELLOW		"\033[38;5;226m"
# define C_ORANGE		"\033[38;5;172m"

// Functions
void	ft_clear_fun(void);
void	add_contact(PhoneBook &phonebook);
void	search_contact(PhoneBook &phonebook);

#endif