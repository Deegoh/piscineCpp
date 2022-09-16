#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie bob = Zombie("Bob");
	bob.announce();

	Zombie *charly = newZombie("Charly");
	charly->announce();
	delete charly;

	randomChump("Deegoh");
	return 0;
}
