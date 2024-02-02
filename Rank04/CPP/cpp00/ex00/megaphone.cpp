/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:11:49 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/02 15:44:39 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void	ft_uppercase(char *s) {
	for (int i = 0; s[i]; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	std::cout << s << std::endl;
}

int	main(int ac, char **av) {
	for (int i = 1; i < ac; i++)
		ft_uppercase(av[i]);
	return (0);
}