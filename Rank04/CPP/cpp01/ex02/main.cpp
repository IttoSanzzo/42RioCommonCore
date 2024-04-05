/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:19:52 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/04 22:56:12 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;
	std::string		testbrain = brain;
	
	std::cout << "Memory Address..: " << &brain << " | Value ..: " << brain << std::endl;
	std::cout << "Memory Address..: " << stringPTR << " | Value ..: " << *stringPTR << std::endl;
	std::cout << "Memory Address..: " << &stringREF << " | Value ..: " << stringREF << std::endl;
	std::cout << "Memory Address..: " << &testbrain << " | Value ..: " << testbrain << std::endl;

	std::cout << std::endl << "* Changing value to example functionality *" << std::endl << std::endl;
	brain = "Not Brain";

	std::cout << "Memory Address..: " << &brain << " | Value ..: " << brain << std::endl;
	std::cout << "Memory Address..: " << stringPTR << " | Value ..: " << *stringPTR << std::endl;
	std::cout << "Memory Address..: " << &stringREF << " | Value ..: " << stringREF << std::endl;
	std::cout << "Memory Address..: " << &testbrain << " | Value ..: " << testbrain << std::endl;
	return (0);
}