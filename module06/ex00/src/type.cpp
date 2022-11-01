#include <conv.hpp>

bool isChar(std::string arg) {
	if (arg.length() == 1)
	{
		if (isPrintable(arg[0]))
			return (true);
	}
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
	std::string ret = "(NULL)";
	if (isChar(arg))
		ret = "char";
	if (isInt(arg))
		ret = "int";
	if (isFloat(arg) > 0)
		ret = "float";
	if (isDouble(arg) > 0)
		ret = "double";
	if (arg == "nan" || arg == "-inf" || arg == "inf" ||
		arg == "nanf" || arg == "-inff" || arg == "inff")
		ret = arg;
	return (ret);
}
