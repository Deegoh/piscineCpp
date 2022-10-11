#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap") {}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap() {
	std::cout << "FragTrap Copy called" << std::endl;
	(*this) = src;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	std::cout << "FragTrap operator= called" << std::endl;
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap "
			  << getName()
			  << " Destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (getHitPoints() <= 0 || getEnergyPoints() <= 0)
	{
		if (getHitPoints() <= 0)
			std::cout << "FragTrap "
					  << getName()
					  << " is already dead." << std::endl;
		else
			std::cout << "No more energy points."<< std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "FragTrap "
			  << getName()
			  << " attacks "
			  << target
			  << " causing "
			  << getAttackDamage()
			  << " points of damage !" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << getName()
			  << " is cool and high fives all folks." << std::endl;
	std::cout << "Everyone is awesome !" << std::endl;
}
