#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point) {
	float lamda1top = ((point.getTy() - c.getTy()) * (b.getTx() - c.getTx()) + (point.getTx() - c.getTx()) * (c.getTy() - b.getTy()));
	float lamda1bot = ((a.getTy() - c.getTy()) * (b.getTx() - c.getTx()) + (a.getTx() - c.getTx()) * (c.getTy() - b.getTy()));
	float lamda1 = lamda1top / lamda1bot;
	float lamda2 = (point.getTx() - lamda1 * a.getTx() - c.getTx() + lamda1 * c.getTx()) / (b.getTx() - c.getTx());
	float lamda3 = 1 - lamda1 - lamda2;
	if (lamda1 > 0 && lamda2 > 0 && lamda3 > 0)
		return true;
	return false;
}

void bsp_checker(const Point a, const Point b, const Point c, const Point point)
{
	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
}
