#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

#define NBR_IDEA 100

class Brain {
public:
	Brain();
	Brain(const Brain &src);
	Brain &operator=(const Brain &rhs);
	~Brain();

	std::string ideas[NBR_IDEA];
};

#endif
