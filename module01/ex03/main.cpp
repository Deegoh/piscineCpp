#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon sword = Weapon("Long Sword");

		HumanA bob = HumanA("Bob", sword);
		bob.attack();
		sword.setType("Short Sword");
		bob.attack();
	}
	{
		Weapon sword = Weapon("Long Sword");

		HumanB jim = HumanB("Jim");
		jim.setWeapon(sword);
		jim.attack();
		sword.setType("Short Sword");
		jim.attack();
	}
	return 0;
}