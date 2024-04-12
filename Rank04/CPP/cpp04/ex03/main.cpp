/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:01:11 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/12 02:32:04 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void customTests(void){
	MateriaSource* materiaMaker = new MateriaSource();
	ICharacter* bob = new Character("bob");
	MateriaSource stackMaker;
	Character ned("Ned");

	std::cout << "Custom Test START" << std::endl;
	materiaMaker->learnMateria(new Ice());
	materiaMaker->learnMateria(new Cure());
	materiaMaker->learnMateria(new Ice());
	materiaMaker->learnMateria(new Cure());
	materiaMaker->learnMateria(new Cure());

	stackMaker.learnMateria(new Ice());
	stackMaker.learnMateria(new Cure());
	stackMaker.learnMateria(new Ice());
	stackMaker.learnMateria(new Cure());
	stackMaker.learnMateria(new Cure());


	bob->equip(materiaMaker->createMateria("non"));
	bob->equip(materiaMaker->createMateria("ice"));
	bob->equip(materiaMaker->createMateria("cure"));
	bob->equip(materiaMaker->createMateria("ice"));
	bob->equip(materiaMaker->createMateria("cure"));
	bob->equip(materiaMaker->createMateria("ice"));
	ned.equip(stackMaker.createMateria("non"));
	ned.equip(stackMaker.createMateria("ice"));
	ned.equip(stackMaker.createMateria("cure"));
	ned.equip(stackMaker.createMateria("ice"));
	ned.equip(stackMaker.createMateria("cure"));
	ned.equip(stackMaker.createMateria("ice"));
	
	bob->use(-1, ned);
	bob->use(0, ned);
	bob->use(1, ned);
	bob->use(2, ned);
	bob->use(3, ned);
	bob->use(4, ned);
	ned.use(-1, *bob);
	ned.use(0, *bob);
	ned.use(1, *bob);
	ned.use(2, *bob);
	ned.use(3, *bob);
	ned.use(4, *bob);

	bob->unequip(-1);
	bob->unequip(0);
	bob->unequip(1);
	bob->unequip(2);
	bob->unequip(3);
	bob->unequip(4);
	ned.unequip(-1);
	ned.unequip(0);
	ned.unequip(1);
	ned.unequip(2);
	ned.unequip(3);
	ned.unequip(4);
	
	delete bob;
	delete materiaMaker;
	std::cout << "Custom Test END" << std::endl << std::endl;
}
void subjectTest(void) {
	std::cout << "Subject Test START" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	std::cout << "Subject Test END" << std::endl << std::endl;
}

int main(void) {
	subjectTest();
	customTests();
	return 0;
}