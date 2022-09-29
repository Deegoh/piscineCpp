#include "Harl.hpp"

void tester(Harl harl);

int main (int ac, char **av)
{
	Harl harl;
	std::string user_input;

	if (ac == 2)
	{
		user_input = av[1];
		harl.complain(user_input);
	}
	else
		harl.complain("");
//	tester(harl);
}

void tester(Harl harl) {
	std::cout << "DEBUG TEST" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "INFO TEST" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "WARNING TEST" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "ERROR TEST" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "DEFAULT TEST" << std::endl;
	harl.complain("asd");
	std::cout << std::endl;

	std::cout << "TESTS FINISHED" << std::endl;
}
