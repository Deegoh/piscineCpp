#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	(*this) = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	if (this != &rhs)
	{
//		Bureaucrat::operator=(rhs);
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {}
