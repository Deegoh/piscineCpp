#include "Point.hpp"
#include <iostream>

bool bsp(const Point a, const Point b, const Point c, const Point point);
void bsp_checker(const Point a, const Point b, const Point c, const Point point);

int main()
{
	const Point a(1, 1);
	const Point b(6, 2);
	const Point c(2, 4);
	const Point point(0, 2);

	std::cout << "1: ";
	bsp_checker(a, b, c, point);

	Point a2(10, 5);
	Point b2(6, 0);
	Point c2(2, 4);
	Point point2(2, 2);
	std::cout << "2: ";
	bsp_checker(a2, b2, c2, point2);

	Point a3(10, 5);
	Point b3(6, 0);
	Point c3(2, 4);
	Point point3(4, 2);
	std::cout << "3: ";
	bsp_checker(a3, b3, c3, point3);

	Point a4(2, 3);
	Point b4(0, 0);
	Point c4(6, 0);
	Point point4(2, 2);
	std::cout << "4: ";
	bsp_checker(a4, b4, c4, point4);
	return 0;
}
