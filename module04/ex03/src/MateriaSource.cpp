#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {}

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

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria *materia) {
	(void)materia;
}

AMateria* MateriaSource::createMateria(const std::string &type) {
	(void)type;
	return NULL;
}
