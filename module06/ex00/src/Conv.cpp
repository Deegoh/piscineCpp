#include "Conv.hpp"

bool isChar(std::string arg) {
	if (arg.length() == 1)
	{
		if (arg[0] >= 0)
			return (true);
	}
	return (false);
}

std::string findType(std::string arg) {
	if (isChar(arg))
		return ("char");
	return ("(NULL)");
}

void printInChar(std::string arg) {
	int tmp = static_cast<char>(arg[0]) - 48;
	std::cout << "char: ";
	if (tmp < 32)
		std::cout << "Non displayable";
	else
		std::cout << tmp;
	std::cout << std::endl;
}

void printInInt(std::string arg) {
	int tmp = (atoi(arg.c_str()));
	std::cout << "int: ";
	std::cout << tmp;
	std::cout << std::endl;
}

void convert(std::string arg) {
	std::string type;
	type = findType(arg);
	printInChar(arg);
	printInInt(arg);
//	char c = (char)ptr;
//	int d = static_cast<int>(ptr);
//	float f = (float)ptr;
//	double ld = (double)ptr;
	std::cout << arg << std::endl;
	std::cout << type << std::endl;
}
