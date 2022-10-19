#include "../inc/Character.hpp"
//#include "Character.hpp"

Character::Character() : ICharacter(), _name("Random"), _nbr_materia(0) {
	for (int i = 0; i < 4; ++i)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : ICharacter(), _name(name), _nbr_materia(0) {
	for (int i = 0; i < 4; ++i)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(const Character &src) : ICharacter() {
	for (int i = 0; i < 4; ++i)
	{
		_inventory[i] = NULL;
	}
	(*this) = src;
}

Character &Character::operator=(const Character &rhs) {
	if (&rhs != this)
	{
		_name = rhs._name;
		_nbr_materia = rhs._nbr_materia;
		for (int i = 0; i < 4; ++i)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

ICharacter::~ICharacter() {}

std::string const &Character::getName() const {
	return (_name);
}

void Character::equip(AMateria *m) {
	if (!m)
		return;
	if (_nbr_materia < 4)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (!_inventory[i])
			{
				_inventory[i] = m;
				_nbr_materia++;
				return;
			}
		}
	}
	else {
		std::cout << "Inventory is full." << std::endl;
	}
}

void Character::unequip(int idx) {
	if (idx <= 3 && idx >= 0 && _nbr_materia > 0 && _inventory[idx])
	{
		_inventory[idx] = NULL;
		_nbr_materia--;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx <= 3 && idx >= 0 && _nbr_materia > 0 && _inventory[idx])
	{
		_inventory[idx]->use(target);
	}
}

AMateria* Character::getPtr(int idx) {
	if (idx <= 3 && idx >= 0 && _nbr_materia > 0 && _inventory[idx])
	{
		return (_inventory[idx]);
	}
	return (NULL);
}

