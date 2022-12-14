#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_raw = rhs.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}
