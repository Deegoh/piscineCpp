#include "PresidentialPardonForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("PresidentialPardonForm", 25, 5),
	_target("DefaultTarget") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
		AForm("PresidentialPardonForm", 25, 5),
		_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
	AForm(src) {
	(*this) = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (getSigned())
	{
		if (executor.getGrade() <= getGradeRequirementExec())
		{
			std::cout << _target
					  << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
		else
		{
			throw AForm::GradeTooLowException();
		}
	}
	else
	{
		throw AForm::SignException();
	}
}
