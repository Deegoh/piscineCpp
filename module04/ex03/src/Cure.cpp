#include "Cure.hpp"

Cure::Cure() {
	_type = "cure";
}

Cure::Cure(const Cure &src) : AMateria() {
	(*this) = src;
}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &rhs) {
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure());
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
