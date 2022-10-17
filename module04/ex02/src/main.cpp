#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "Ex02 Brain" << std::endl;
		{
			const AAnimal* dogo = new Dog();
			const AAnimal* cato = new Cat();
			(void)dogo;
			(void)cato;
			delete dogo;
			delete cato;
		}
		std::cout << std::endl;
		{
			const Dog* dogo = new Dog();
			const Cat* cato = new Cat();
			std::cout << std::endl;
			for (int i = 0; i < 5; ++i)
			{
				std::ostringstream str1;
				str1 << i;
				dogo->setIdea("Hello dogo idea " + str1.str() + "!", i);
				cato->setIdea("Hello cato idea " + str1.str() + "!", i);
			}
			std::cout << std::endl;
			{
				const Dog dopy = *dogo;
				const Cat capy = *cato;
				for (int i = 0; i < 5; ++i)
				{
					std::cout << dogo->getIdea(i) << " = " << dopy.getIdea(i) << std::endl;
					std::cout << cato->getIdea(i) << " = " << capy.getIdea(i) << std::endl;
				}
			}
			std::cout << std::endl;
			{
				Dog dopy;
				Cat capy;
				dopy = *dogo;
				capy = *cato;
				for (int i = 0; i < 5; ++i)
				{
					std::cout << dogo->getIdea(i) << " = " << dopy.getIdea(i) << std::endl;
					std::cout << cato->getIdea(i) << " = " << capy.getIdea(i) << std::endl;
				}
			}
			std::cout << std::endl;
			for (int i = 0; i < 5; ++i)
			{
				std::cout << dogo->getIdea(i) << std::endl;
				std::cout << cato->getIdea(i) << std::endl;
			}
			std::cout << std::endl;
			std::cout << dogo->getIdea(10) << std::endl;
			std::cout << dogo->getIdea(-10) << std::endl;

			delete dogo;
			delete cato;
		}
	}
	return (0);
}
