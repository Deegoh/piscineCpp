#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
	_tx = 0;
	_ty = 0;
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y) {
	_tx = _x.getRawBits();
	_ty = _y.getRawBits();
}

Point::Point(const Point &src) {
	*this = src;
}

Point &Point::operator=(const Point &rhs) {
	if (this != &rhs)
	{
		_tx = rhs._x;
		_ty = rhs._y;
	}
	return *this;
}

Point::~Point() {}
