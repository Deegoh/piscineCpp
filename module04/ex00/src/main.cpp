#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const Dog* dogo = new Dog();
		const Cat* cato = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();//will output the cat sound!
		j->makeSound();
		meta->makeSound();
		dogo->makeSound();
		cato->makeSound();

		delete meta;
		delete j;
		delete i;
		delete dogo;
		delete cato;
	}
	std::cout << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();

		meta->makeSound();

		delete meta;
	}

	return (0);
}
