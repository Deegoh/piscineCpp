class AForm;
#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <stdexcept>

# include "Bureaucrat.hpp"

class AForm {
public:
	AForm();
	AForm(std::string name, int requirementSigned, int requirementExec);
	AForm(const AForm &src);
	AForm &operator=(const AForm &rhs);
	virtual ~AForm();

	void beSigned(Bureaucrat &src);
	virtual void execute(const Bureaucrat &executor) const = 0;

	std::string getName() const;
	bool getSigned() const;
	int getGradeRequirementSigned() const;
	int getGradeRequirementExec() const;

class GradeTooHighException : public std::exception {
public:
	virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception {
public:
	virtual const char* what() const throw();
};

class SignException : public std::exception {
public:
	virtual const char* what() const throw();
};

private:
	const std::string _name;
	bool _signed;
	const int _gradeRequirementSigned;
	const int _gradeRequirementExec;
};

std::ostream &operator<<(std::ostream &os, const AForm &rhs);

#endif
