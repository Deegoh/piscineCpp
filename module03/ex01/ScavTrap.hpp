#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &rhs);
	~ScavTrap();

	void guardGate();

	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	bool getGuardMode() const;

private:
	void setName(std::string name);
	void setHitPoints(int hp);
	void setEnergyPoints(int ep);
	void setAttackDamage(int ad);

	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
	bool _guardMode;
};

#endif
