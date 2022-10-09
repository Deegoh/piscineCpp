#include "Point.hpp"
#include <iostream>

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main()
{
	const Point a(0, 0);
	const Point b(6, 0);
	const Point c(2, 4);
	const Point point(2, 2);

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return 0;
}
