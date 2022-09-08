#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	char cmd[7];
	Contact contact;
	PhoneBook phoneBook;

	std::cout << "Chose your cmd: ";
	std::cin.getline(cmd, 7);
	std::cout << "cmd is " << cmd << std::endl;
	return 0;
}