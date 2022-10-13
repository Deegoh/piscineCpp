#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	_type = "WrongCat";
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
	std::cout << "WrongCat Copy Called" << std::endl;
	(*this) = src;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	std::cout << "WrongCat = Called" << std::endl;
	if (this != &rhs)
	{
		WrongAnimal::operator=(rhs);
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat doesn't makes sound !" << std::endl;
}
