#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Animal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	(*this) = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	if(&rhs != this)
		(*this) = rhs;
	return (*this);
}

WrongAnimal::~WrongAnimal() {}

void WrongAnimal::makeSound() {
	std::cout << "WrongAnimal doesn't makes sound !" << std::endl;
}
