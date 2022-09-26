#include "Harl.hpp"

Harl::Harl() {
	_level[0] = "DEBUG";
	_level[1] = "INFO";
	_level[2] = "WARNING";
	_level[3] = "ERROR";
	_level[4] = "DEFAULT";
}

Harl::~Harl() {}

void Harl::complain(std::string level) {
	int i;
	for(i = 0; i < NB_FP; i++)
	{
		if (level == _level[i])
			break;
	}
	switch (i)
	{
		case 0:
			debug();
			break;
		case 1:
			info();
			break;
		case 2:
			warning();
			break;
		case 3:
			error();
			break;
		default:
			defaultCase();
	}
}

void Harl::defaultCase() {
std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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

