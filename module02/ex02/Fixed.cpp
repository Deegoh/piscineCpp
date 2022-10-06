#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const nbr_i) {
	_raw = nbr_i << _bits;
//	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const nbr_f) {
	_raw = roundf(nbr_f * (1 << _bits));
//	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_raw = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream & o, const Fixed &rhs) {
	o << rhs.toFloat();
	return o;
}

bool Fixed::operator>(Fixed const &rhs) const {
	return getRawBits() > rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const &rhs) const {
	return getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<(Fixed const &rhs) const {
	return getRawBits() < rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const &rhs) const {
	return getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(Fixed const &rhs) const {
	return getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const &rhs) const {
	return getRawBits() != rhs.getRawBits();
}

Fixed Fixed::operator+(Fixed const &rhs) const {
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const {
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const{
	return Fixed(toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++() {
	this->_raw++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed &Fixed::operator--() {
	this->_raw--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return a <= b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return a <= b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return a >= b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return a >= b ? a : b;
}

int Fixed::getRawBits() const {
//	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void Fixed::setRawBits(const int raw) {
//	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}

float Fixed::toFloat() const {
	float pow = (1 << _bits);
	return _raw / pow;
}

int Fixed::toInt() const {
	return _raw >> _bits;
}
