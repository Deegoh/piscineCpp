#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat &rhs);
	~Cat();

	void makeSound() const;

	virtual void setIdea(std::string idea, int i) const;
	virtual std::string getIdea(int i) const;

private:
	Brain* _brain;
};

#endif
