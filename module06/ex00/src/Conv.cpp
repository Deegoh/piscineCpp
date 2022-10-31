#include "Conv.hpp"

bool isChar(std::string arg) {
	if (arg.length() == 1)
	{
		if (arg[0] >= 0)
			return (true);
	}
	return (false);
}

bool isPrintable(char c) {
	if (126 >= c && c >= 32)
		return (true);
	return (false);
}

bool isInt(std::string arg) {
	for (size_t i = 0; i < arg.length(); ++i)
	{
		if (std::isdigit(arg[i]))
		{
			continue;
		}
		return (false);
	}
	return (true);
}

int isFloat(std::string arg) {
	int dot = 0;
	int sign = 0;
	int f = 0;
	int p = 0;

	for (size_t i = 0; i < arg.length(); ++i)
	{
		if (arg[i] == '-' || arg[i] == '+')
		{
			sign++;
			continue;
		}
		if (arg[i] == 'f')
		{
			f++;
			continue;
		}
		if (arg[i] == '.')
		{
			dot++;
			continue;
		}
		if (std::isdigit(arg[i]))
		{
			if (dot == 1)
				p++;
			continue;
		}
		return (-1);
	}
	if (f == 1 && dot <= 1 && sign <= 1)
		return (p);
	return (-1);
}

int isDouble(std::string arg) {
	int dot = 0;
	int sign = 0;
	int p = 0;

	for (size_t i = 0; i < arg.length(); ++i)
	{
		if (arg[i] == '-' || arg[i] == '+')
		{
			sign++;
			continue;
		}
		if (arg[i] == '.')
		{
			dot++;
			continue;
		}
		if (std::isdigit(arg[i]))
		{
			if (dot == 1)
				p++;
			continue;
		}
		return (-1);
	}
	if (dot <= 1 && sign <= 1)
		return (p);
	return (-1);
}

std::string findType(std::string arg) {
	if (isChar(arg))
		return ("char");
	if (isInt(arg))
		return ("int");
	if (isFloat(arg) > 0)
		return ("float");
	if (isDouble(arg) > 0)
		return ("double");
	return ("(NULL)");
}

void printInChar(char c) {
//	char tmp = static_cast<char>(arg[0]);
	std::cout << "char: ";
	if (!isPrintable(c))
		std::cout << "Non displayable";
	else
		std::cout << c;
	std::cout << std::endl;
}

void printInInt(int d) {
//	int tmp = (atoi(arg.c_str()));
	std::cout << "int: ";
	std::cout << d;
	std::cout << std::endl;
}

void printInFloat(float f, int p) {
//	int tmp = (atoi(arg.c_str()));
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(p) << f;
	std::cout << "f" << std::endl;
}

void printInDouble(std::string arg, int p) {
	double ld = static_cast<double>(atof(arg.c_str()));
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(p) << ld;
	std::cout << std::endl;
}

void printConv(std::string arg, std::string type) {
	if (type == "char")
	{
		printInChar(static_cast<char>(arg[0]));
		printInInt(static_cast<char>(arg[0]));
		printInFloat(static_cast<float>(arg[0]), 0);
		printInDouble(&arg[0], 0);
	} else if (type == "int")
	{
		printInChar(static_cast<char>(atoi(arg.c_str())));
		printInInt(static_cast<int>(atoi(arg.c_str())));
		printInFloat(static_cast<float>(atof(arg.c_str())), 0);
		printInDouble(arg, 0);
	}
	else if (type == "float")
	{
		int p = isFloat(arg);
		printInChar(static_cast<char>(atoi(arg.c_str())));
		printInInt(static_cast<int>(atoi(arg.c_str())));
		printInFloat(static_cast<float>(atof(arg.c_str())), p);
		printInDouble(arg, p);
	}
	else if (type == "double")
	{
		int p = isDouble(arg);
		printInChar(static_cast<char>(atoi(arg.c_str())));
		printInInt(static_cast<int>(atoi(arg.c_str())));
		printInFloat(static_cast<float>(atof(arg.c_str())), p);
		printInDouble(arg.c_str(), p);
	}
}

void convert(std::string arg) {
	std::string type;
	type = findType(arg);
	printConv(arg, type);
//	printInChar(arg);
//	printInInt(arg);
//	char c = (char)ptr;
//	int d = static_cast<int>(ptr);
//	float f = (float)ptr;
//	double ld = (double)ptr;
//	std::cout << arg << std::endl;
	std::cout << type << std::endl;
}
