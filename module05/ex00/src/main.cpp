#include <iostream>

#include "Bureaucrat.hpp"


int main() {
	Bureaucrat test = Bureaucrat();
	Bureaucrat test2 = test;

	(void)test;
	(void)test2;

	std::cout << "Helle template" << std::endl;
}