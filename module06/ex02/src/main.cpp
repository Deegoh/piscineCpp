#include "../inc/base_utils.hpp"

int main()
{
	srand(time(NULL));
	Base *ptrBase;
	ptrBase = generate();
	Base &refBase = *ptrBase;
	identify(ptrBase);
	identify(refBase);
	delete ptrBase;
}
