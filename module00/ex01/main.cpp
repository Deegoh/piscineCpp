#include "PhoneBook.hpp"

int	main()
{
	std::string cmd;
	PhoneBook phoneBook;

	while (1)
	{
		std::cout << "Choose your cmd(add, search, exit): ";
		std::getline(std::cin, cmd, '\n');
		if (std::cin.fail())
			break;
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
	}
	return 0;
}
