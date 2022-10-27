#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "AForm.hpp"

# define NBR_FORM 3
class Intern {
public:
	typedef AForm *(Intern::*formPF)(std::string);
	typedef struct {
		std::string key;
		formPF value;
	} form;
	Intern();
	Intern(const Intern &src);
	Intern &operator=(const Intern &rhs);
	~Intern();

	AForm *makeForm(std::string formName, std::string targetName);
	AForm *makeShrubbery(std::string targetName);
	AForm *makeRobotomy(std::string targetName);
	AForm *makePresidential(std::string targetName);

private:
	form _forms[NBR_FORM];
};

#endif
