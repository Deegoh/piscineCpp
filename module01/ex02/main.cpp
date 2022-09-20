#include <iostream>

int main()
{
	std::string var = "HI THIS IS BRAIN";

	std::string *stringPTR = &var;
	std::string &stringREF = var;

	std::cout << "adress" << std::endl;
	std::cout << "var: " << &var << std::endl
			  << "ptr: " << stringPTR << std::endl
			  << "ref: " << &stringREF << std::endl << std::endl;

	std::cout << "valeur" << std::endl;
	std::cout << "var:" << var << std::endl
			  << "ptr:" << *stringPTR << std::endl
			  << "ref:" << stringREF << std::endl;
	return 0;
}