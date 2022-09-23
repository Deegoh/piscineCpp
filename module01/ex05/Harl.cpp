#include "Harl.hpp"

Harl::Harl() {
	_level[0].key = "DEBUG";
	_level[0].value = &Harl::debug;
	_level[1].key = "INFO";
	_level[1].value = &Harl::info;
	_level[2].key = "WARNING";
	_level[2].value = &Harl::warning;
	_level[3].key = "ERROR";
	_level[3].value = &Harl::error;
}

Harl::~Harl() {}

void Harl::complain(std::string level) {
	for(int i = 0; i < NB_FP; i++)
	{
		if (level == _level[i].key)
			(this->*_level[i].value)();
	}
}

void Harl::debug() {
	std::cout << "hello debug" << std::endl;
}

void Harl::info() {
	std::cout << "hello info" << std::endl;
}

void Harl::warning() {
	std::cout << "hello warning" << std::endl;
}

void Harl::error() {
	std::cout << "hello error" << std::endl;
}

