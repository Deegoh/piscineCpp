#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "HumanB Construct" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB Destruct" << std::endl;
}

void HumanB::attack() {
	std::cout << this->_name
			  << " attacks with their "
			  << this->_weapon->getType()
			  << std::endl;
}
//
//void HumanB::setWeapon(Weapon weapon) {
//	this->_weapon = weapon;
//}
