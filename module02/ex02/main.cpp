#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(10);
	Fixed const d(15);

	std::cout << "PDF" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;
	std::cout << "Test de fou" << std::endl;
	std::cout << "a   -> " << a << std::endl;
	std::cout << "++a -> " << ++a << std::endl;
	std::cout << "a   -> " << a << std::endl;
	std::cout << "a++ -> " << a++ << std::endl;
	std::cout << "a   -> " << a << std::endl;
	std::cout << "a+a -> " << a + a << std::endl;
	std::cout << "a   -> " << a << std::endl;
	std::cout << "--a -> " << --a << std::endl;
	std::cout << "a   -> " << a << std::endl;
	std::cout << "a-- -> " << a-- << std::endl;
	std::cout << "a   -> " << a << std::endl;
	std::cout << std::endl;
	std::cout << a << " > " << b << " -> " << (a > b) << std::endl;
	std::cout << b << " > " << a << " -> " << (b > a) << std::endl;
	std::cout << a << " >= " << b << " -> " << (a >= b) << std::endl;
	std::cout << b << " >= " << a << " -> " << (b >= a) << std::endl;
	std::cout << std::endl;
	std::cout << a << " < " << b << " -> " << (a < b) << std::endl;
	std::cout << b << " < " << a << " -> " << (b < a) << std::endl;
	std::cout << a << " <= " << b << " -> " << (a <= b) << std::endl;
	std::cout << b << " <= " << a << " -> " << (b <= a) << std::endl;
	std::cout << std::endl;
	std::cout << c << " + " << d << " = " << c + d << std::endl;
	std::cout << c << " - " << d << " = " << c - d << std::endl;
	std::cout << c << " * " << d << " = " << c * d << std::endl;
	std::cout << c << " / " << d << " = " << c / d << std::endl;
	std::cout << std::endl;
	std::cout << "min(" << a << ", " << b << ") " << Fixed::min(a, b) << std::endl;
	std::cout << "min(" << a << ", " << c << ") " << Fixed::min(a, c) << std::endl;
	std::cout << "min(" << a << ", " << d << ") " << Fixed::min(a, d) << std::endl;
	std::cout << "min(" << b << ", " << a << ") " << Fixed::min(b, a) << std::endl;
	std::cout << "min(" << b << ", " << c << ") " << Fixed::min(b, c) << std::endl;
	std::cout << "min(" << b << ", " << d << ") " << Fixed::min(b, d) << std::endl;
	std::cout << "min(" << c << ", " << a << ") " << Fixed::min(c, a) << std::endl;
	std::cout << "min(" << c << ", " << b << ") " << Fixed::min(c, b) << std::endl;
	std::cout << "min(" << c << ", " << d << ") " << Fixed::min(c, d) << std::endl;
	std::cout << "min(" << d << ", " << a << ") " << Fixed::min(d, a) << std::endl;
	std::cout << "min(" << d << ", " << b << ") " << Fixed::min(d, b) << std::endl;
	std::cout << "min(" << d << ", " << c << ") " << Fixed::min(d, c) << std::endl;
	std::cout << std::endl;
	std::cout << "max(" << a << ", " << b << ") " << Fixed::max(a, b) << std::endl;
	std::cout << "max(" << a << ", " << c << ") " << Fixed::max(a, c) << std::endl;
	std::cout << "max(" << a << ", " << d << ") " << Fixed::max(a, d) << std::endl;
	std::cout << "max(" << b << ", " << a << ") " << Fixed::max(b, a) << std::endl;
	std::cout << "max(" << b << ", " << c << ") " << Fixed::max(b, c) << std::endl;
	std::cout << "max(" << b << ", " << d << ") " << Fixed::max(b, d) << std::endl;
	std::cout << "max(" << c << ", " << a << ") " << Fixed::max(c, a) << std::endl;
	std::cout << "max(" << c << ", " << b << ") " << Fixed::max(c, b) << std::endl;
	std::cout << "max(" << c << ", " << d << ") " << Fixed::max(c, d) << std::endl;
	std::cout << "max(" << d << ", " << a << ") " << Fixed::max(d, a) << std::endl;
	std::cout << "max(" << d << ", " << b << ") " << Fixed::max(d, b) << std::endl;
	std::cout << "max(" << d << ", " << c << ") " << Fixed::max(d, c) << std::endl;

	return 0;
}
