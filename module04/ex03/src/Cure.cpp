#include "Cure.hpp"

Cure::Cure() : AMateria() {}

Cure::Cure(const Cure &src) : AMateria(){
	(*this) = src;
}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &rhs) {
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

AMateria* AMateria::clone() const {
	return (new Cure());
}
