#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	ClapTrap &operator=(ClapTrap const &rhs);
	~ClapTrap();

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

private:
	void setName(std::string name);
	void setHitPoints(int hp);
	void setEnergyPoints(int ep);
	void setAttackDamage(int ad);

	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
};

#endif
