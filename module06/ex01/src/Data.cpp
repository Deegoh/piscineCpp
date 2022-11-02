#include "../inc/Data.hpp"

Data::Data() {}

Data::Data(const Data &src) {
	(*this) = src;
}

Data &Data::operator=(const Data &rhs) {
	if (this != &rhs)
	{
		d = rhs.d;
		c = rhs.c;
	}
	return (*this);
}

Data::~Data() {}
