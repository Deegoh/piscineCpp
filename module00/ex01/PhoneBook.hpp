#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include <stdlib.h>
# include <iomanip>

# define ADD "ADD"
# define SEARCH "SEARCH"
# define EXIT "EXIT"

class PhoneBook {
public:
	PhoneBook();
	~PhoneBook();

	void addContact();
	void printContact(int i);
	void searchAndPrint(int i);

	int getNbContact() const;
private:
	Contact contacts[8];
	int _nbContact;
};

#endif
