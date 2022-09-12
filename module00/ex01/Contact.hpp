#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact {
public:
	Contact();
	~Contact();

	void		setFirstName(std::string str);
	std::string	getFirstName(void) const;

	void		setLastName(std::string str);
	std::string	getLastName(void) const;

	void		setNickName(std::string str);
	std::string	getNickName(void) const;

	void		setPhone(std::string str);
	std::string	getPhone(void) const;

	void		setSecret(std::string str);
	std::string	getSecret(void) const;

	void		printContact(int i);
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phone;
	std::string _secret;
};

#endif