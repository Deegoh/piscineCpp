#include "../inc/base_utils.hpp"

Base *generate() {
	Base *ret = NULL;
	switch (std::rand() % 3)
	{
		case 0:
			std::cout << "A" << std::endl;
			ret = new A;
			break;
		case 1:
			std::cout << "B" << std::endl;
			ret = new B;
			break;
		case 2:
			std::cout << "C" << std::endl;
			ret = new C;
	}
	return (ret);
}

void identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	if (a != NULL)
	{
		std::cout << "Conversion is A and a ptr" << std::endl;
		return;
	}
	B *b = dynamic_cast<B *>(p);
	if (b != NULL)
	{
		std::cout << "Conversion is B and a ptr" << std::endl;
		return;
	}
	C *c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "Conversion is C and a ptr" << std::endl;
}

void identify(Base &p)
{
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Conversion is A and a ref" << std::endl;
		return;
	}
	catch (std::exception &bc) {
//		std::cout << "Conversion is NOT A: " << bc.what() << std::endl;
	}
	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Conversion is B and a ref" << std::endl;
		return;
	}
	catch (std::exception &bc) {
//		std::cout << "Conversion is NOT B: " << bc.what() << std::endl;
	}
	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Conversion is C and a ref" << std::endl;
		return;
	}
	catch (std::exception &bc) {
//		std::cout << "Conversion is NOT C: " << bc.what() << std::endl;
	}
}
