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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
				 "enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming "
				 "for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

