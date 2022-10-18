#include "Cure.hpp"

Cure::Cure() {}

Cure::Cure(const Cure &src) {
	(*this) = src;
}

Cure::~Cure() {}

Cure Cure::operator=(const Cure &rhs) {
	if (this != &rhs)
		_type = rhs.type;
}

std::string const & getType() const {
	return (this->type);
}
