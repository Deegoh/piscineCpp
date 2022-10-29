#include "Conv.hpp"

int main(int ac, char** av) {
	if (ac != 2)
	{
		std::cout << "Bad argument" << std::endl;
		return (1);
	}
	convert(av[1]);
	return (0);
}
