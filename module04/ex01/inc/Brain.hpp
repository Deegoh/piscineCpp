#ifndef BRAIN_HPP
# define BRAIN_HPP

//#include <string>

class Brain {
public:
	Brain();
	Brain(const Brain &src);
	Brain &operator=(const Brain &rhs);
	~Brain();

//	std::string idea[100];
};

#endif
