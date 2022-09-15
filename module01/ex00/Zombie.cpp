#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie contruct" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie destruct" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
