#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
//	ClapTrap theOne("Neo");
//
//	theOne.attack("Bob");
//	for (int i = 0; i < 10; i++)
//		theOne.beRepaired(1);
//	theOne.takeDamage(10);
//	theOne.takeDamage(10);
//	theOne.beRepaired(1);
//	theOne.attack("Deegoh");
//	std::cout << std::endl;
//
//	ClapTrap theSecond(theOne);
//	theSecond.attack("Fish");
//	theSecond.beRepaired(10);
//	std::cout << std::endl;
//
//	ScavTrap theAssailant("Eren");
//	ScavTrap theGuard("Reignar");
//	{
//		ScavTrap theThird(theGuard);
//	}
//	theAssailant.attack("Reignar");
//	theAssailant.guardGate();
//	theAssailant.guardGate();
//	theAssailant.guardGate();
//	std::cout << theGuard.getName() << std::endl;
//	theGuard = theAssailant;
//	theGuard.guardGate();
//	std::cout << theGuard.getName() << std::endl;
//	std::cout << std::endl;
//
//	FragTrap theCoolest("Emmet");
//	theCoolest.highFivesGuys();
//	FragTrap theWorst(theCoolest);
//	std::cout << std::endl;

	std::cout << "Diamond" << std::endl;
	DiamondTrap theAll("Thanos");
	theAll.getAllStats();
	theAll.whoAmI();
	theAll.attack("Avengers");
	std::cout << std::endl;
	DiamondTrap theNothing(theAll);
	theNothing.getAllStats();
	std::cout << std::endl;
	return 0;
}
