#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
//	std::cout << "PhoneBook Constructor called" << std::endl;
	this->_nbContact = 0;
}

PhoneBook::~PhoneBook() {
//	std::cout << "PhoneBook Destructor called" << std::endl;
}

std::string getDataCin(std::string str)
{
	std::string data;

	std::cout << str;
	std::getline(std::cin, data, '\n');
	if (std::cin.fail())
		return "";
	if (data.empty())
		data = getDataCin(str);
	return data;
}

void PhoneBook::addContact() {
	std::string data;

	data = getDataCin("Enter your first name: ");
	if (data.empty())
		return;
	this->contacts[_nbContact].setFirstName(data);
	data = getDataCin("Enter your last name: ");
	if (data.empty())
		return;
	this->contacts[_nbContact].setLastName(data);
	data = getDataCin("Enter your nick name: ");
	if (data.empty())
		return;
	this->contacts[_nbContact].setNickName(data);
	data = getDataCin("Enter your phone: ");
	if (data.empty())
		return;
	this->contacts[_nbContact].setPhone(data);
	data = getDataCin("Tell me your secret: ");
	if (data.empty())
		return;
	this->contacts[_nbContact].setSecret(data);
	this->_nbContact = (this->_nbContact + 1) % 8;
}

int PhoneBook::getNbContact() const {
	return this->_nbContact;
}

void PhoneBook::printContact(int i) {
	std::cout << "First Name: " << this->contacts[i].getFirstName() << std::endl;
	std::cout << "Last Name:  " << this->contacts[i].getLastName() << std::endl;
	std::cout << "Nick Name:  " << this->contacts[i].getNickName() << std::endl;
	std::cout << "Phone:      " << this->contacts[i].getPhone() << std::endl;
	std::cout << "Secret:     " << this->contacts[i].getSecret() << std::endl;
}

void formatPrinter(std::string key, std::string value) {
	std::cout << std::left << "│";
	std::cout << std::setw(10);
	std::cout << std::setfill(' ');
	if (key.length() > 10)
		std::cout << key.substr(0, 9).append(".");
	else
		std::cout << key;
	std::cout << "│";
	std::cout << std::setw(10);
	std::cout << std::setfill(' ');
	if (value.length() > 10)
		std::cout << value.substr(0, 9).append(".");
	else
		std::cout << value;
	std::cout << "│" << std::endl;
}

void PhoneBook::searchAndPrint(int i) {
	if (i > 8 || i < 1 || this->contacts[i - 1].getFirstName().empty())
	{
		std::cout << "Choose a existing contact" << std::endl;
		return;
	}
	std::cout << "┌──────────┬──────────┐" << std::endl;
	std::cout << "│Index #   │" << std::setfill(' ') << std::setw(10) << i << "│" << std::endl;
	std::cout << "├──────────┼──────────┤" << std::endl;
	formatPrinter("First Name", this->contacts[i - 1].getFirstName());
	std::cout << "├──────────┼──────────┤" << std::endl;
	formatPrinter("Last Name", this->contacts[i - 1].getLastName());
	std::cout << "├──────────┼──────────┤" << std::endl;
	formatPrinter("Nick Name", this->contacts[i - 1].getNickName());
	std::cout << "└──────────┴──────────┘" << std::endl;
}
