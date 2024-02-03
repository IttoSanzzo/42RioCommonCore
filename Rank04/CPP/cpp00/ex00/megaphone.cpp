/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:11:49 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/02 22:30:58 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av) {
	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" , 0);
	for (int i = 1; i < ac; i++)
		for (int y = 0; av[i][y]; y++)
			std::cout << (char)std::toupper(av[i][y]);
	std::cout << std::endl;
	return (0);
}