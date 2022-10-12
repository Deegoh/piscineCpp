#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
public:
	Animal();
	Animal(const Animal &src);
	Animal &operator=(const Animal &rhs);
	~Animal();

	virtual void makeSound();

	std::string getType() const;

protected:
	std::string _type;
};

#endif
