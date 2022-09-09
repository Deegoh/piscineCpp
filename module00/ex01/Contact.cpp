#include "Contact.hpp"

Contact::Contact() {
	std::cout << "Contact Constructor called" << std::endl;
	setFirstName("Tiago");
	std::cout << "this->fN = " << getFirstName() << std::endl;
	setLastName("Pinto Monteiro");
	std::cout << "this->lN = " << getLastName() << std::endl;
	setNickName("Deegoh");
	std::cout << "this->nN = " << getNickName() << std::endl;
	setPhone("078 765 15 91");
	std::cout << "this->phone = " << getPhone() << std::endl;
	setSecret("J'aime les fraises UwU");
	std::cout << "this->secret = " << getSecret() << std::endl;
}

Contact::~Contact() {
	std::cout << "Contact Destructor called" << std::endl;
}

std::string	Contact::getFirstName() const {
	return this->_firstName;
}

std::string Contact::getLastName() const {
	return this->_lastName;
}

std::string Contact::getNickName() const {
	return this->_nickName;
}

std::string Contact::getPhone() const {
	return this->_phone;
}

std::string Contact::getSecret() const {
	return this->_secret;
}

void Contact::setFirstName(std::string str) {
	this->_firstName = str;
}

void Contact::setLastName(std::string str) {
	this->_lastName = str;
}

void Contact::setNickName(std::string str) {
	this->_nickName = str;
}

void Contact::setPhone(std::string str) {
	this->_phone = str;
}

void Contact::setSecret(std::string str) {
	this->_secret = str;
}
