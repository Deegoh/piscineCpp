#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "construct weapon" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "destruct weapon" << std::endl;
}

std::string const & Weapon::getType() {
	return this->_type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}