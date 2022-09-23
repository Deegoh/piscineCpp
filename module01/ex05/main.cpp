#include "Harl.hpp"

#include <sstream>

int main() {
	Harl harl;

	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("DEBUG");
	return 0;
}
