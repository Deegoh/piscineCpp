#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
public:
	Point();
	Point(const Fixed x, const Fixed y);
	Point(Point const &src);
	Point &operator=(Point const &rhs);
	~Point();

	int getTx();
	int getTy();
private:
	const Fixed _x;
	const Fixed _y;
	Fixed _tx;
	Fixed _ty;
};

#endif
