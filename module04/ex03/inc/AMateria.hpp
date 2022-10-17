#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
#include "ICharacter.hpp"

class AMateria {
public:
	AMateria(std::string const & type);

	std::string const & getType() const; // return the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string type;
};
#endif
