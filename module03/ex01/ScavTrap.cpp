#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _guardMode(false) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap "
			  << getName()
			  << " Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap() {
	std::cout << "ScavTrap Copy called" << std::endl;
	(*this) = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout << "ScavTrap operator= called" << std::endl;
	if (&rhs != this)
	{
		this->ClapTrap::operator=(rhs);
		_guardMode = rhs._guardMode;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap "
			  << getName()
			  << " Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (getHitPoints() <= 0 || getEnergyPoints() <= 0)
	{
		if (getHitPoints() <= 0)
			std::cout << "ScavTrap "
					  << getName()
					  << " is already dead." << std::endl;
		else
			std::cout << "No more energy points."<< std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "ScavTrap "
			  << getName()
			  << " attacks "
			  << target
			  << " causing "
			  << getAttackDamage()
			  << " points of damage !" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void ScavTrap::guardGate() {
	if (!_guardMode)
	{
		std::cout << "ScavTrap "
				  << getName()
				  << " is now in Gate keeper mode." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap "
				  << getName()
				  << " is now in normal mode." << std::endl;
	}
	_guardMode = !_guardMode;
}
