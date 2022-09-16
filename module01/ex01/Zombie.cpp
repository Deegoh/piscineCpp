#include "Zombie.hpp"

Zombie::Zombie() : _name("Placeholder") {
	std::cout <<"Zombie contruct" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << name <<" Zombie rename" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " Zombie destruct" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
