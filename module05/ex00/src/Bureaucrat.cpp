#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "construct" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	std::cout << "construct" << std::endl;
	try
	{
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
	catch (Bureaucrat::GradeTooLowException &gtle)
	{
		std::cout << gtle.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	std::cout << "copy" << std::endl;
	(*this) = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	if (this != &rhs)
	{
//		Bureaucrat::operator=(rhs);
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "destruct" << std::endl;
}

std::string Bureaucrat::getName() const {return (_name);}

int Bureaucrat::getGrade() const {return (_grade);}

void Bureaucrat::incrementGrade(int value) {
	_grade -= value;
}

void Bureaucrat::decrementGrade(int value) {
	_grade += value;
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

//	try
//	{
//		if ()
//		{
//			th
//		}
//	}
//	catch(GradeTooHighException& e)
//	{
//
//	}
