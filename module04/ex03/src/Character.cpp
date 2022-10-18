#include "../inc/Character.hpp"
//#include "Character.hpp"

Character::Character() : ICharacter(), _name("Random") {}

Character::Character(std::string name) : ICharacter(), _name(name) {}

Character::Character(const Character &src) : ICharacter() {
	(*this) = src;
}

Character &Character::operator=(const Character &rhs) {
	if (&rhs != this)
	{
		_name = rhs._name;
	}
	return (*this);
}

Character::~Character() {}

std::string const &Character::getName() const {
	return (_name);
}

void Character::equip(AMateria *m) {
	(void)m;
}

void Character::unequip(int idx) {
	(void)idx;
}

void Character::use(int idx, ICharacter &target) {
	(void)idx;
	(void)target;
}
