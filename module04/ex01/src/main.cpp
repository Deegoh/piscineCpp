#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "Ex00 Animal" << std::endl;
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
		std::cout << "Ex00 WrongAnimal" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongDog();
		const WrongAnimal* i = new WrongCat();
		const WrongDog* dogo = new WrongDog();
		const WrongCat* cato = new WrongCat();
		std::cout << std::endl;

		meta->makeSound();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		dogo->makeSound();
		cato->makeSound();

		std::cout << std::endl;
		delete meta;
		delete j;
		delete i;
		delete dogo;
		delete cato;
	}
	std::cout << std::endl;
	{
		std::cout << "Ex01 Brain" << std::endl;
		const Animal* dogo = new Dog();
//		const Animal* cato = new Cat();

		delete dogo;
//		delete cato;
	}

	return (0);
}
