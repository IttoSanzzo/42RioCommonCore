/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:32:29 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 18:33:42 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	std::cout << "/* Subject One" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//
		delete i;//
	}
	std::cout << "*/" << std::endl;
	
	int size = 5;
	Animal	*arrayAnimals[2 * size];

	for (int i = 0; i < size; i++) {
		arrayAnimals[i] = new Dog();
		arrayAnimals[size + i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < 2 * size; i++)
		delete arrayAnimals[i];
	return (0);
}