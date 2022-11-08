#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdexcept>
# include <iostream>

template<typename T>
void display_container(T &container) {
	typename T::iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}

template<typename T>
void easyfind(T &container, int n) {
	typename T::iterator ite = container.end();
	for (typename T::iterator it = container.begin(); it != ite; ++it)
	{
		if (*it == n)
		{
			std::cout << *it << std::endl;
			return;
		}
	}
	throw std::exception();
}

#endif
