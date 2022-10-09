#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
		_name("placeHolder"),
		_hitPoints(100),
		_energyPoints(50),
		_attackDamage(20),
		_guardMode(false) {
	std::cout << "ScavTrap "
			  << getName()
			  << " Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
		_name(name),
		_hitPoints(100),
		_energyPoints(50),
		_attackDamage(20),
		_guardMode(false) {
	std::cout << "ScavTrap "
			  << getName()
			  << " Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap() {
	std::cout << "ScavTrap Copy called" << std::endl;
	(*this) = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	if (&rhs != this)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
		_guardMode = rhs._guardMode;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap "
			  << getName()
			  << " Destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	_guardMode ? _guardMode = false : _guardMode = true;
	std::cout << "ScavTrap "
			  << getName()
			  << " is now in Gate keeper mode." << std::endl;
}

std::string ScavTrap::getName() const {
	return (_name);
}

int ScavTrap::getHitPoints() const {
	return (_hitPoints);
}

int ScavTrap::getEnergyPoints() const {
	return (_energyPoints);
}

int ScavTrap::getAttackDamage() const {
	return (_attackDamage);
}

bool ScavTrap::getGuardMode() const {
	return (_guardMode);
}

void ScavTrap::setName(std::string name) {
	_name = name;
}

void ScavTrap::setHitPoints(int hp) {
	_hitPoints = hp;
}

void ScavTrap::setEnergyPoints(int ep) {
	_energyPoints = ep;
}


void ScavTrap::setAttackDamage(int ad) {
	_attackDamage = ad;
}
