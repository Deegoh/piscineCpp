#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal {
public:
//	AAnimal();
//	AAnimal(const AAnimal &src);
//	AAnimal &operator=(const AAnimal &rhs);
	virtual ~AAnimal();

	virtual void makeSound() = 0;

	std::string getType() const;

protected:
	std::string _type;
};

#endif
