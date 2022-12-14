class Form;
#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <ostream>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Form {
public:
	Form();
	Form(std::string name, int requirementSigned, int requirementExec);
	Form(const Form &src);
	Form &operator=(const Form &rhs);
	~Form();

	void beSigned(Bureaucrat &src);

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

private:
	const std::string _name;
	bool _signed;
	const int _gradeRequirementSigned;
	const int _gradeRequirementExec;
};

std::ostream &operator<<(std::ostream &os, const Form &rhs);

#endif
