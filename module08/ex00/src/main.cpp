#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

void vector() {
	std::vector<int> v1;

	v1.push_back(1);
	v1.push_back(17);
	v1.push_back(42);
	v1.push_back(100);
	std::cout << "Vector test" << std::endl;
	try {
		easyfind(v1, 20);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << ": found nothing." << std::endl;
	}
	try {
		easyfind(v1, 42);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << ": found nothing." << std::endl;
	}
}

void list() {
	std::list<int> lst1;

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);
	lst1.push_back(100);
	std::cout << "list test" << std::endl;
	try {
		easyfind(lst1, 20);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << ": found nothing." << std::endl;
	}
	try {
		easyfind(lst1, 42);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << ": found nothing." << std::endl;
	}
}

int main() {
	vector();
	list();
}
