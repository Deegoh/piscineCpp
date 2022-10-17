#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
	Character(std::string name);
	Character(const Character& src);
	Character &operator=(const Character& rhs);
	~Character();
private:
	std::string _name;
	AMateria _inventory[4];
};

#endif
