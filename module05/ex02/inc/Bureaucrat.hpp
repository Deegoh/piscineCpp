class Bureaucrat;
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept>

# include "AForm.hpp"

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string name, int _grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

	void signForm(AForm &src);
	void executeForm(const AForm &form);

class GradeTooHighException: public std::exception {
public:
	virtual const char* what() const throw();
};

class GradeTooLowException: public std::exception {
public:
	virtual const char* what() const throw();
};

private:
	const std::string _name;
	int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif
