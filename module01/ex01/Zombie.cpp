#include "Zombie.hpp"

void Zombie::setName(std::string name) {
	this->_name = name;
}

Zombie::Zombie() : _name("Default") {
	std::cout <<"Zombie construct" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " Zombie destruct" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
