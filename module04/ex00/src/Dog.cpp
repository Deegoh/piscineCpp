#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Constructor Called" << std::endl;
}
Dog::Dog(const Dog &src) {
	std::cout << "Dog Copy Called" << std::endl;
	(*this) = src;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "Dog operator= Called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() {
	std::cout << "Whoo Whoo" << std::endl;
}
