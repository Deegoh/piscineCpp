#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Animal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << "Animal Copy Called" << std::endl;
	(*this) = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << "Animal Operator= Called" << std::endl;
	if(&rhs != this)
		(*this) = rhs;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Animal Destructor Called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal doesn't makes sound !" << std::endl;
}
