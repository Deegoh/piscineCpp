#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main()
{
	const Point a(1, 2);
	const Point b(1, 2);
	const Point c(1, 2);
	const Point point(1, 2);

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return 0;
}
