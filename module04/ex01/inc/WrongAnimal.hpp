#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal &operator=(const WrongAnimal &rhs);
	~WrongAnimal();

	void makeSound() const;
	std::string getType() const;

protected:
	std::string _type;
};

#endif
