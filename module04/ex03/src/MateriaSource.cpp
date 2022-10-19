#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource(), _nbr_materia(0) {
	for (int i = 0; i < 4; ++i)
	{
		_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src) : IMateriaSource() {
	(*this) = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	if(this != &rhs)
	{
		IMateriaSource::operator=(rhs);
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i)
	{
		delete _inventory[i];
	}
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (_nbr_materia < 4)
	{
		_inventory[_nbr_materia] = materia;
		_nbr_materia++;
	}
	else {
		std::cout << "Inventory is full." << std::endl;
	}
}

AMateria* MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < _nbr_materia; i++)
	{
		if (_inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (0);
}
