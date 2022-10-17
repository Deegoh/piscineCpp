#include "Animal.hpp"

//Animal::Animal() {
//	std::cout << "Animal Constructor Called" << std::endl;
//}
//
//Animal::Animal(const Animal &src) {
//	(*this) = src;
//	std::cout << "Animal Copy Called" << std::endl;
//}
//
//Animal &Animal::operator=(const Animal &rhs) {
//	std::cout << "Animal Operator = Called" << std::endl;
//	if (this != &rhs)
//		_type = rhs._type;
//	return (*this);
//}
//
AAnimal::~AAnimal() {
	std::cout << "Animal Destructor Called" << std::endl;
}

void AAnimal::makeSound() {
	std::cout << "Animal makes sound" << std::endl;
}

std::string AAnimal::getType() const {
	return (_type);
}
