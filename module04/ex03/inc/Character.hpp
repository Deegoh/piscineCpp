#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
	Character(std::string name);
	Character(const Character& src);
	Character &operator=(const Character& rhs);
	~Character();

	std::string const & getName() const;
	void equipe(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
private:
	std::string _name;
//	AMateria _inventory[4];
};

#endif
