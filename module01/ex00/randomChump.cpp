#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie *random = new Zombie(name);
	random->announce();
	delete random;
}
