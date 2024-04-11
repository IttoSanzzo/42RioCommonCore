/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:32:29 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 17:35:12 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void) {
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound(); //will output the cat sound!

	std::cout << std::endl;
	delete i;
	delete j;
	delete meta;


	std::cout << std::endl << std::endl;
	const WrongAnimal*	x = new WrongAnimal();
	const WrongAnimal*	y = new WrongCat();
	std::cout << std::endl;
	std::cout << x->getType() << " " << std::endl;
	std::cout << y->getType() << " " << std::endl;
	std::cout << std::endl;
	x->makeSound();
	y->makeSound();
	std::cout << std::endl;
	delete x;
	delete y;
	
	return (0);
}