#include "../inc/Character.hpp"

Character::Character(std::string name) : _name(name) {}

Character::Character(const Character &src) {
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

const std::string &Character::getName() const {return (_name);}

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
