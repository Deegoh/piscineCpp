#include "Point.hpp"

float area(int ax, int ay, int bx, int by, int cx, int cy) {
	float ret = (ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) / 2;
	return ret < 0 ? ret -=ret : ret;
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
	float triangleA = area(a.getTx(), a.getTy(), b.getTx(), b.getTy(), c.getTx(), c.getTy());
	float lamda1 = area(point.getTx(), point.getTy(), b.getTx(), b.getTy(), c.getTx(), c.getTy());
	float lamda2 = area(a.getTx(), a.getTy(), point.getTx(), point.getTy(), c.getTx(), c.getTy());
	float lamda3 = area(a.getTx(), a.getTy(), b.getTx(), b.getTy(), point.getTx(), point.getTy());

	return triangleA == (lamda1 + lamda2 + lamda3);
}