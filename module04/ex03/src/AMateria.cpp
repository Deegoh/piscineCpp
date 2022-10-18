#include "AMateria.hpp"
#include "../inc/AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
	return (_type);
}

AMateria* AMateria::clone() const {}

void AMateria::use(ICharacter &target) {
	(void)target;
}