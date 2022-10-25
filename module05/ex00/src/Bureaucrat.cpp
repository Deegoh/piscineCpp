#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "construct" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	std::cout << "construct" << std::endl;

	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		_grade = grade;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()) {
	std::cout << "copy" << std::endl;
	(*this) = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	if (this != &rhs)
	{
		_grade = rhs._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "destruct" << std::endl;
}

std::string Bureaucrat::getName() const {return (_name);}

int Bureaucrat::getGrade() const {return (_grade);}

void Bureaucrat::incrementGrade() {
	if ((_grade - 1) < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		_grade--;
	}
}

void Bureaucrat::decrementGrade() {
	if ((_grade + 1) > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		_grade++;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs)
{
	os	<< rhs.getName() << ", bureaucrat grade "
		<< rhs.getGrade() << ".";
	return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is to High !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is to low !");
}
