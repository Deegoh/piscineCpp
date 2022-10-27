#include "Intern.hpp"
#include "../inc/Intern.hpp"

Intern::Intern() {
	_forms[0].key = "shrubbery creation";
	_forms[0].value = &Intern::makeShrubbery;
	_forms[1].key = "robotomy request";
	_forms[1].value = &Intern::makeRobotomy;
	_forms[2].key = "presidential pardon";
	_forms[2].value = &Intern::makePresidential;
}

Intern::Intern(const Intern &src) {
	(*this) = src;
}

Intern &Intern::operator=(const Intern &rhs) {
	if (&rhs != this)
	{
		for (int i = 0; i < NBR_FORM; ++i)
		{
			_forms[i].key = rhs._forms[i].key;
			_forms[i].value = rhs._forms[i].value;
		}
	}
	return (*this);
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string formName, std::string targetName) {
	for (int i = 0; i < NBR_FORM; ++i)
	{
		if (_forms[i].key == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*_forms[i].value)(targetName));
		}
	}
	std::cout << "No forms with this name." << std::endl;
	return (NULL);
}

AForm *Intern::makeShrubbery(std::string targetName) {
	return (new ShrubberyCreationForm(targetName));
}

AForm *Intern::makeRobotomy(std::string targetName) {
	return (new RobotomyRequestForm(targetName));
}

AForm *Intern::makePresidential(std::string targetName) {
	return (new PresidentialPardonForm(targetName));
}

