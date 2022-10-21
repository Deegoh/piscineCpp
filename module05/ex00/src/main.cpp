#include <iostream>

#include "../inc/Bureaucrat.hpp"


int main() {
	Bureaucrat test = Bureaucrat();
	Bureaucrat test2 = test;
	Bureaucrat test3 = Bureaucrat("boby", 10);
	Bureaucrat test4 = Bureaucrat("boby", 1000);

	(void)test;
	(void)test2;
	std::cout << test3.getName() << std::endl;
	std::cout << test3.getGrade() << std::endl;
	std::cout << test3 << std::endl;
	std::cout << test4.getName() << std::endl;
	std::cout << test4.getGrade() << std::endl;

	std::cout << "Helle template" << std::endl;
}