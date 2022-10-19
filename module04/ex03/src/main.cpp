#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria* ground;
	ground = me->getPtr(0);
	me->unequip(0);
	delete ground;

	ICharacter* bob = new Character("bob");
	{
		Character* deegoh = new Character("Deegoh");
		deegoh->equip(tmp);
		Character* doppelganger = new Character(*deegoh);
		doppelganger->use(0, *deegoh);
		deegoh->unequip(0);
		delete doppelganger;
		delete deegoh;
	}
	{
		Character* deegoh;
		deegoh = new Character("Deegoh");
		deegoh->equip(tmp);
		Character* doppelganger = new Character(*deegoh);
		doppelganger->use(0, *deegoh);
		deegoh->unequip(0);
		delete doppelganger;
		delete deegoh;
	}

	me->use(2, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return (0);
}
