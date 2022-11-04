#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>
# include <string>
# include <iostream>
# include <sstream>

template<typename T>
void iter(T *array, int size, void (*func)(T &array)) {
	for (int i = 0; i < size; i++)
	{
		func(array[i]);
	}
}

template<typename T>
void print_array(T *array, int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

template<typename T>
void increment(T &value) {
	value = value + 1;
}

template<>
void increment(std::string &value) {
	std::stringstream ss;
	ss << (std::atoi(value.c_str()) + 1);
	ss >> value;
}

#endif
