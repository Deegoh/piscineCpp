#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	std::cout << std::endl;

	ClapTrap theSecond(theOne);
	theSecond.attack("Fish");
	theSecond.beRepaired(10);
	std::cout << std::endl;

	ScavTrap theAssailant("Eren");
	theAssailant.attack("Reignar");
	return 0;
}
