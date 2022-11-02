#include "serial.hpp"
#include "Data.hpp"

int main() {
	Data original;
	Data *unserial;
	int *head;
	uintptr_t serial;

	original.d = 42;
	original.c = '*';

	std::cout << "Data Original address " << &original << std::endl;
	std::cout << "Data Original int value: " << original.d << std::endl;
	std::cout << "Data Original char value: " << original.c << std::endl;
	std::cout << std::endl;

	std::cout << "serialize" << std::endl;
	serial = serialize(&original);
	std::cout << "uintptr_t address: " << &serial << std::endl;
	head = reinterpret_cast<int *>(serial);
	std::cout << "head int: " << *head << std::endl;
	head++;
	std::cout << "head char: " << *reinterpret_cast<char *>(head) << std::endl;
	std::cout << std::endl;

	std::cout << "unserialize" << std::endl;
	unserial = deserialize(serial);
	std::cout << "Data unserial address " << unserial << std::endl;
	std::cout << "Data unserial int value: " << unserial->d << std::endl;
	std::cout << "Data unserial char value: " << unserial->c << std::endl;
}