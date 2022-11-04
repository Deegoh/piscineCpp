#include "iter.hpp"

int main() {
	{
		std::cout << "int type" << std::endl;
		int array[] = {1, 3, 4};
		print_array(array, 3);
		increment(array[0]);
		print_array(array, 3);
		iter(array, 3, increment);
		print_array(array, 3);
	}
	std::cout << std::endl;
	{
		std::cout << "float type" << std::endl;
		float array[] = {42.42, 13.7, 4};
		print_array(array, 3);
		increment(array[0]);
		print_array(array, 3);
		iter(array, 3, increment);
		print_array(array, 3);
	}
	std::cout << std::endl;
	{
		std::cout << "char type" << std::endl;
		char array[] = {'(', '3', '1'};
		print_array(array, 3);
		increment(array[0]);
		print_array(array, 3);
		iter(array, 3, increment);
		print_array(array, 3);
	}
	std::cout << std::endl;
	{
		std::cout << "string type" << std::endl;
		std::string array[] = {"1", "3", "4"};
		print_array(array, 3);
		increment(array[0]);
		print_array(array, 3);
		iter(array, 3, increment);
		print_array(array, 3);
	}
}