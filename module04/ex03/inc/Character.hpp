#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter {
public:
	Character();
	Character(std::string name);
	Character(const Character& src);
	Character &operator=(const Character& rhs);
	~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	virtual AMateria* getPtr(int idx);
private:
	std::string _name;
	AMateria* _inventory[4];
	int _nbr_materia;
};

#endif
