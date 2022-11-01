#include <conv.hpp>

bool isPrintable(char c) {
	if (126 >= c && c >= 32)
		return (true);
	return (false);
}

void printInChar(char c) {
	std::cout << "char: ";
	if (!isPrintable(c))
		std::cout << "Non displayable";
	else
		std::cout << "'" << c<< "'";
	std::cout << std::endl;
}

void printInInt(int d) {
	std::cout << "int: ";
	std::cout << d;
	std::cout << std::endl;
}

void printInFloat(float f, int p) {
	if (p == 0)
		p = 1;
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(p) << f;
	std::cout << "f" << std::endl;
}

void printInDouble(double ld, int p) {
	if (p == 0)
		p = 1;
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(p) << ld;
	std::cout << std::endl;
}
