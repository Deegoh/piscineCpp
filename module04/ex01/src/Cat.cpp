#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal() {
	_type = "Cat";
	std::cout << "Cat Constructor Called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal() {
	std::cout << "Cat Copy Called" << std::endl;
	_brain = NULL;
	(*this) = src;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat Operator= Called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		if (_brain)
			delete _brain;
		_brain = new Brain;
		_brain->operator=(*rhs._brain);
	}
	return (*this);
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Mew mew" << std::endl;
}

void Cat::setIdea(std::string idea, int i) const {
	if (i < 0 || i > 99)
	{
		std::cout << "Index between 0 - 99" << std::endl;
		return;
	}
	_brain->ideas[i] = idea;
	std::cout << "Cat idea " << i << " set" << std::endl;
}

std::string Cat::getIdea(int i) const {
	if (i < 0 || i > 99)
		return ("Index between 0 - 99");
	return (_brain->ideas[i]);
}

