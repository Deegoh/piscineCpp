#include <Array.tpp>

//#define MAX_VAL 750
#define MAX_VAL 5

int intMain();
int floatMain();
void cpyMain();
int stringMain();

int main()
{
//	cpyMain();
//	intMain();
//	floatMain();
	stringMain();
}

void cpyMain()
{
	std::cout << "cpy main" << std::endl;
	int *a = new int();
	int* mirror = new int[MAX_VAL];
	Array<int> numbers(MAX_VAL);
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << mirror[i] << std::endl;
	}
	std::cout << std::endl;
	{
		Array<int> copy;
		copy = numbers;
		for (int i = 0; i < MAX_VAL; i++)
		{
			std::cout << copy[i] << " == " << numbers[i] << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Array<int> copy = numbers;
		for (int i = 0; i < MAX_VAL; i++)
		{
			std::cout << copy[i] << " == " << numbers[i] << std::endl;
		}
	}
	delete a;
	delete [] mirror;
}

int floatMain()
{
	std::cout << "float main" << std::endl;
	Array<float> numbers(MAX_VAL);
	float* mirror = new float[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const float value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<float> tmp = numbers;
		Array<float> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}

int intMain()
{
	std::cout << "int main" << std::endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}

int stringMain()
{
	std::cout << "string main" << std::endl;
	Array<std::string> numbers(MAX_VAL);
	std::string* mirror = new std::string[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::string tmp;
		std::stringstream ss;
		ss << rand();
		ss >> tmp;
		numbers[i] = tmp;
		mirror[i] = tmp;
	}
	//SCOPE
	{
		Array<std::string> tmp = numbers;
		Array<std::string> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = "0";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = "0";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}
