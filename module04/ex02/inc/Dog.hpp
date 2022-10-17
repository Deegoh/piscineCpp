#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal{
public:
	Dog();
	Dog(const Dog &src);
	Dog &operator=(const Dog &rhs);
	~Dog();

	virtual void makeSound();

	virtual void setIdea(std::string idea, int i) const;
	virtual std::string getIdea(int i) const;

private:
	Brain* _brain;
};

#endif
