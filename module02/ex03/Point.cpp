#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
	_tx = 0;
	_ty = 0;
}

Point::Point(int x, int y) : _x(x), _y(y) {
	_tx.setRawBits(x);
	_ty.setRawBits(y);
}

Point::Point(const Point &src) {
	*this = src;
}

Point &Point::operator=(const Point &rhs) {
	if (this != &rhs)
	{
		_tx = rhs._tx;
		_ty = rhs._ty;
	}
	return *this;
}

int Point::getTx() const {
	return _tx.getRawBits();
}

int Point::getTy() const {
	return _ty.getRawBits();
}

Point::~Point() {}
