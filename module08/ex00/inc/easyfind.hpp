#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdexcept>
# include <iostream>
# include <algorithm>

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
	typename T::iterator found = std::find(container.begin(), container.end(), n);
	if (found != container.end())
	{
		std::cout << *found << std::endl;
		return;
	}
	throw std::exception();
}

#endif
