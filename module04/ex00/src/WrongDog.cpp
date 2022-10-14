#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal() {
	_type = "WrongDog";
	std::cout << "WrongDog Constructor Called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &src) : WrongAnimal() {
	std::cout << "WrongCat Copy Called" << std::endl;
	(*this) = src;
}

WrongDog &WrongDog::operator=(const WrongDog &rhs) {
	std::cout << "WrongCat = Called" << std::endl;
	if (this != &rhs)
	{
		WrongAnimal::operator=(rhs);
	}
	return (*this);
}

WrongDog::~WrongDog() {
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongDog::makeSound() const {
	std::cout << "WrongDog doesn't makes sound !" << std::endl;
}
