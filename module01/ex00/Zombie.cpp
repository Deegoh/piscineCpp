#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << name <<" Zombie contruct" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " Zombie destruct" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
