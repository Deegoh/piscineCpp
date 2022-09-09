#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
#include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	~PhoneBook();
//	addContact();
private:
	Contact contacts[8];
	int _nbContact;
};

#endif