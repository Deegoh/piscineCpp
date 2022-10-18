#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria() {}

AMateria &AMateria::operator=(const AMateria &rhs) {
	if (&rhs != this)
	{
		_type = rhs._type;
	}
	return (*this);
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter &target) {
	(void)target;
}
