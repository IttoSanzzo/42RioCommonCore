/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:22:22 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/09 22:00:58 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void) {
	Point const	a(0, 0);
	Point const	b(10, 30);
	Point const	c(20, 0);
	Point const	inside(10, 15);
	Point const	outside(30, 15);

	std::cout << "a: (" << a.getX() << ", " << a.getY() << ")" << std::endl;
	std::cout << "b: (" << b.getX() << ", " << b.getY() << ")" << std::endl;
	std::cout << "c: (" << c.getX() << ", " << c.getY() << ")" << std::endl << std::endl;
	std::cout << "inside:  (" << inside.getX() << ", " << inside.getY() << ")" << std::endl;
	std::cout << ((bsp(a, b, c, inside) == true) ? "is inside" : "is outside") << std::endl << std::endl;
	
	std::cout << "outside: (" << outside.getX() << ", " << outside.getY() << ")" << std::endl;
	std::cout << ((bsp(a, b, c, outside) == true) ? "is inside" : "is outside") << std::endl;
	return (0);
}