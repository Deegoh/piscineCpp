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
	void setName(std::string name);

	int getHitPoints() const;
	void setHitPoints(int hp);

	int getEnergyPoints() const;
	void setEnergyPoints(int ep);

	int getAttackDamage() const;
	void setAttackDamage(int ad);

private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

};

#endif
