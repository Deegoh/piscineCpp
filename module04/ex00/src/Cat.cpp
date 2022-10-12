#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &src) {
	std::cout << "Cat Copy Called" << std::endl;
	(*this) = src;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat Operator= Called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() {
	std::cout << "Mew mew" << std::endl;
}
