#include "RobotomyRequestForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("RobotomyRequestForm", 72, 45),
	_target("DefaultTarget") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("RobotomyRequestForm", 72, 45),
	_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) {
	(*this) = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (getSigned())
	{
		if (executor.getGrade() <= getGradeRequirementExec())
		{
			std::cout << "bzzziiip bzzziiip bziiiiiip" << std::endl;
			if (std::rand() % 2)
			{
				std::cout << _target
						  << " has been robotomized successfully."<< std::endl;
			}
			else
			{
				std::cout << "The robotomy failed." << std::endl;
			}
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
