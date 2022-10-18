#include "MateriaSource.hpp"
#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource &src) {
	(*this) = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs) {
	if(this != &rhs)
	{

	}
	return (*this);
}

MateriaSource::~MateriaSource() {}

