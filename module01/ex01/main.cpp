#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);
//Zombie* newZombie(std::string name);
//void randomChump(std::string name);

int main()
{
	Zombie *horde;
	horde = zombieHorde(5, "test");
	delete [] horde;
	return 0;
}
