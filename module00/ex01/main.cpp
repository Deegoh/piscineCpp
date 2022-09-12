#include "PhoneBook.hpp"
#include <string>
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
//		selector_cmd(cmd);
		for (int i = 0; i < (int)cmd.length(); i++)
			cmd[i] = (char)toupper(cmd[i]);
		if (cmd.compare(ADD) == 0)
			phoneBook.addContact();
		else if (cmd.compare("PRINT") == 0)
			phoneBook.printContact(phoneBook.getNbContact() - 1);
		else if (cmd.compare(SEARCH) == 0)
		{
			std::cout << "Search between 1 - 8: ";
			std::getline(std::cin, cmd, '\n');
			phoneBook.searchAndPrint(atoi(cmd.c_str()));
		}
		else if (cmd.compare(EXIT) == 0)
			break; // or exit if in function
		std::cout << "Choose your cmd(add, search, exit): ";
		std::getline(std::cin, cmd, '\n');
	}
	return 0;
}