#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {}

DiamondTrap::DiamondTrap(std::string name) :
						 ClapTrap(name+"_clap_name"),
						 ScavTrap(name),
						 FragTrap(name),
						 _name(name) {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap "
			  << getName()
			  << " Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) :
						 ClapTrap(src),
						 ScavTrap(src),
						 FragTrap(src) {
	std::cout << "DiamondTrap Copy called" << std::endl;
	(*this) = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	std::cout << "Diamond operator= called" << std::endl;
	if (&rhs != this)
	{
		ClapTrap::operator=(rhs);
		ScavTrap::operator=(rhs);
		FragTrap::operator=(rhs);
		_name = rhs._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap "
			  << getName()
			  << " Destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I have a Diamond and a Clap name. Yes I have two names." << std::endl;
	std::cout << "DiamondTrap " << _name << " is my name" << std::endl;
	std::cout << "ClapTrap " << ClapTrap::getName() << " is my name" << std::endl;
}

void DiamondTrap::getAllStats() {
	std::cout << "HP " << _hitPoints << std::endl;
	std::cout << "EP " << _energyPoints << std::endl;
	std::cout << "AD " << _attackDamage << std::endl;
}
