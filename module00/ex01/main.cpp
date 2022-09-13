#include "PhoneBook.hpp"
#include <stdlib.h>

#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

int	main()
{
	std::string cmd;
	PhoneBook phoneBook;

	std::cout << "Choose your cmd(add, search, exit): ";
	std::getline(std::cin, cmd, '\n');
	while (!cmd.empty())
	{
		for (int i = 0; i < (int)cmd.length(); i++)
			cmd[i] = (char)toupper(cmd[i]);
		if (cmd.compare(ADD) == 0)
			phoneBook.addContact();
		else if (cmd.compare(SEARCH) == 0)
		{
			std::cout << "Search between 1 - 8: ";
			std::getline(std::cin, cmd, '\n');
			phoneBook.searchAndPrint(atoi(cmd.c_str()));
		}
		else if (cmd.compare(EXIT) == 0)
			break;
		std::cout << "Choose your cmd(add, search, exit): ";
		std::getline(std::cin, cmd, '\n');
	}
	return 0;
}
