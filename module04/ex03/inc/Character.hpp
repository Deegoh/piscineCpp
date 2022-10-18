#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

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
private:
	std::string _name;
//	AMateria _inventory[4];
};

#endif
