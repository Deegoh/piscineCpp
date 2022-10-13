#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << "WrongAnimal Copy Called" << std::endl;
	(*this) = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << "WrongAnimal = Called" << std::endl;
	if(&rhs != this)
		_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal doesn't makes sound !" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (_type);
}
