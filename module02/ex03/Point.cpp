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
	if (_x != rhs._x && _y == rhs._y)
		_x = rhs._x;
	else if (_x == rhs._x && _y != rhs._y)
		_y = rhs._y;
	else if (_x != rhs._x && _y != rhs._y)
	{
		_x = rhs._x;
		_y = rhs._y;
	}
	return *this;
}

Point::~Point() {}
