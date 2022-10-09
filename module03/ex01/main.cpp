#include "ClapTrap.hpp"

int main()
{
	ClapTrap theOne("Neo");
	theOne.attack("Bob");
	for (int i = 0; i < 10; i++)
		theOne.beRepaired(1);
	theOne.takeDamage(10);
	theOne.takeDamage(10);
	theOne.beRepaired(1);
	theOne.attack("Deegoh");
	return 0;
}
