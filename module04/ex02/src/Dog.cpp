#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : AAnimal() {
	_type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
	_brain = new Brain();
}
Dog::Dog(const Dog &src) : AAnimal() {
	std::cout << "Dog Copy Called" << std::endl;
	_brain = NULL;
	(*this) = src;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "Dog operator= Called" << std::endl;
	if (this != &rhs)
	{
		this->AAnimal::operator=(rhs);
		if (_brain)
			delete _brain;
		_brain = new Brain;
		this->_brain->operator=(*rhs._brain);
	}
	return (*this);
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() {
	std::cout << "Whoo Whoo" << std::endl;
}

void Dog::setIdea(std::string idea, int i) const {
	if (i < 0 || i > 99)
	{
		std::cout << "Index between 0 - 99" << std::endl;
		return;
	}
	_brain->ideas[i] = idea;
	std::cout << "Dog idea " << i << " set" << std::endl;
}

std::string Dog::getIdea(int i) const {
	if (i < 0 || i > 99)
		return ("Index between 0 - 99");
	return (_brain->ideas[i]);
}
