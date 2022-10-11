#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("ClapHolder"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	std::cout << "ClapTrap "
			  << getName()
			  << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
		_name(name),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0) {
	std::cout << "ClapTrap "
			  << getName()
			  << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "ClapTrap Copy called" << std::endl;
	(*this) = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	std::cout << "ClapTrap operator= called" << std::endl;
	if (&rhs != this)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap "
			  << getName()
			  << " Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target) {
	if (getHitPoints() <= 0 || getEnergyPoints() <= 0)
	{
		if (getHitPoints() <= 0)
			std::cout << "ClapTrap "
					  << getName()
					  << " is already dead." << std::endl;
		else
			std::cout << "No more energy points."<< std::endl;
		return;
	}
	std::cout << "ClapTrap "
			  << getName()
			  << " attacks "
			  << target
			  << " causing "
			  << getAttackDamage()
			  << " points of damage !" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() <= 0)
	{
			std::cout << "ClapTrap "
					  << getName()
					  << " is already dead." << std::endl;
		return;
	}
	int newHP = getHitPoints() - amount;
	if (newHP <= 0)
		std::cout << "ClapTrap "
				  << getName()
				  << " died." << std::endl;
	else
		std::cout << "ClapTrap "
				  << getName()
				  << " lost "
				  << amount
				  << " hit points." << std::endl;
	setHitPoints(newHP);
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (getHitPoints() <= 0 || getEnergyPoints() <= 0)
	{
		if (getHitPoints() <= 0)
			std::cout << "ClapTrap "
					  << getName()
					  << " is already dead." << std::endl;
		else
			std::cout << "No more energy points."<< std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	setHitPoints(getHitPoints() + amount);
	std::cout << "ClapTrap "
			  << getName()
			  << " repairs itself. "
			  << "Get "
			  << getHitPoints()
			  << " Hit Points." << std::endl;
}

std::string ClapTrap::getName() const {
	return (_name);
}

void ClapTrap::setName(std::string name) {
	_name = name;
}

int ClapTrap::getHitPoints() const {
	return (_hitPoints);
}

void ClapTrap::setHitPoints(int hp) {
	_hitPoints = hp;
}

int ClapTrap::getEnergyPoints() const {
	return (_energyPoints);
}

void ClapTrap::setEnergyPoints(int ep) {
	_energyPoints = ep;
}

int ClapTrap::getAttackDamage() const {
	return (_attackDamage);
}

void ClapTrap::setAttackDamage(int ad) {
	_attackDamage = ad;
}
