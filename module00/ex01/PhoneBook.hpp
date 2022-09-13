#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

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
