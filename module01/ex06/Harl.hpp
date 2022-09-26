#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

#define NB_FP 5

class Harl {
public:
	Harl();
	~Harl();

	void complain(std::string level);

private:
	std::string _level[NB_FP];
	void debug();
	void info();
	void warning();
	void error();
	void defaultCase();
};

#endif
