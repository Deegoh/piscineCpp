#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
public:
	Point();
	Point(int x, int y);
	Point(Point const &src);
	Point &operator=(Point const &rhs);
	~Point();

	int getTx() const;
	int getTy() const;
private:
	const Fixed _x;
	const Fixed _y;
	Fixed _tx;
	Fixed _ty;
};

#endif
