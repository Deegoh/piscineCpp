#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) :
	_name(name),
	_weapon(type) {
//	std::cout << "construct HumanA" << std::endl;
}

HumanA::~HumanA() {
//	std::cout << "destruct HumanA" << std::endl;
}

void HumanA::attack() {
	std::cout << this->_name
			  << " attacks with their "
			  << this->_weapon.getType()
			  << std::endl;
}
