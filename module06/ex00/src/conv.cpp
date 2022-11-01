#include "conv.hpp"

void printAndConv(std::string arg, std::string type) {
	if (type == "char")
	{
		char c = arg[0];
		printInChar(static_cast<char>(c));
		printInInt(static_cast<int>(c));
		printInFloat(static_cast<float>(c), 0);
		printInDouble(static_cast<double>(c), 0);
	} else if (type == "int")
	{
		int d = std::atoi(arg.c_str());
		printInChar(static_cast<char>(d));
		printInInt(static_cast<int>(d));
		printInFloat(static_cast<float>(d), 0);
		printInDouble(static_cast<double>(d), 0);
	}
	else if (type == "float")
	{
		int p = isFloat(arg);
		float f = std::atof(arg.c_str());
		printInChar(static_cast<char>(f));
		printInInt(static_cast<int>(f));
		printInFloat(static_cast<float>(f), p);
		printInDouble(static_cast<double>(f), p);
	}
	else if (type == "double")
	{
		int p = isDouble(arg);
		double ld = std::atof(arg.c_str());
		printInChar(static_cast<char>(ld));
		printInInt(static_cast<int>(ld));
		printInFloat(static_cast<float>(ld), p);
		printInDouble(static_cast<double>(ld), p);
	}
	else if (type == "nan" || type == "-inf" || type == "inf" ||
			 type == "nanf" || type == "-inff" || type == "inff")
	{
		float f;
		if (type == "nan" || type == "nanf")
			f = NAN;
		if (type == "inf" || type == "inff")
			f = INFINITY;
		if (type == "-inf" || type == "-inff")
			f = -INFINITY;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		printInFloat(static_cast<float>(f), 0);
		printInDouble(static_cast<double>(f), 0);
	}
	else
	{
		std::cout << "Bad argument" << std::endl;
	}
}

void convert(std::string arg) {
	std::string type;
	type = findType(arg);
	printAndConv(arg, type);
}
