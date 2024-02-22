/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:41:51 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/22 13:48:37 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# ifndef CPP01_IOSTREAM
#  define CPP01_IOSTREAM
#   include <iostream>
#endif
# ifndef CPP01_STRING
#  define CPP01_STRING
#   include <string>
#endif
#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif