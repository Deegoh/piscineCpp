#include <iostream>
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

#include <iostream>

#include "../inc/Character.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//
//	ICharacter* me = new Character("me");
//	std::cout << me->getName() << std::endl;
//
//	AMateria* tmp;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//
//	ICharacter* bob = new Character("bob");
//
//	me->use(0, *bob);
//	me->use(1, *bob);
//
//	delete bob;
//	delete me;
//	delete src;
	(void)src;
	return (0);
}