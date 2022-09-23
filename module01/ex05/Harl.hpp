#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

#define NB_FP 4

class Harl {
	typedef void (Harl::*levelPF)(void);
	typedef struct {
		std::string key;
		levelPF value;
	} level;

public:
	Harl();
	~Harl();

	void complain(std::string level);

private:
	level _level[NB_FP];
	void debug();
	void info();
	void warning();
	void error();
};

#endif
