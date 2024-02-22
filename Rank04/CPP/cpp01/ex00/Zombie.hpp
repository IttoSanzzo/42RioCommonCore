/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:55:23 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/22 13:45:29 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# ifndef CPP01_STRING
#  define CPP01_STRING
#   include <string>
#endif
# ifndef CPP01_IOSTREAM
#  define CPP01_IOSTREAM
#   include <iostream>
# endif

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);
	private:
		std::string	name;
	public:
		void	announce(void);
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
};

#endif