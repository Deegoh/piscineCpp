#include "Harl.hpp"

#include <sstream>

int main() {
	Harl harl;

	std::cout << "INFO TEST" << std::endl;
	harl.complain("INFO");
	std::cout << "ERROR TEST" << std::endl;
	harl.complain("ERROR");
	std::cout << "WARNING TEST" << std::endl;
	harl.complain("WARNING");
	std::cout << "DEBUG TEST" << std::endl;
	harl.complain("DEBUG");
	std::cout << "MONKEY TEST" << std::endl;
	harl.complain("asd");
	std::cout << "TESTS FINISHED" << std::endl;
	return 0;
}
