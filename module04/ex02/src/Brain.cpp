#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < NBR_IDEA; ++i)
	{
		ideas[i] = "My mind is empty.";
	}
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain copy Called" << std::endl;
	(*this) = src;
}

Brain &Brain::operator=(const Brain &rhs) {
	std::cout << "Brain copy Called" << std::endl;
	if (&rhs != this)
	{
		for (int i = 0; i < NBR_IDEA; ++i)
		{
			ideas[i] = rhs.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain Destructor Called" << std::endl;
}
