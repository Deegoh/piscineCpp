#include "Ice.hpp"

Ice::Ice() {
	_type = "ice";
}

Ice::Ice(const Ice &src) : AMateria() {
	(*this) = src;
}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &rhs) {
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
