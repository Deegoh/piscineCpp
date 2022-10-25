#include "../inc/Form.hpp"
#include "Form.hpp"

Form::Form() {}

Form::Form(std::string name, int requirementSigned, int requirementExec) :
			_name(name),
			_signed(false),
			_requirementSigned(requirementSigned),
			_requirementExec(requirementExec) {
	std::cout << "construct form" << std::endl;
}

Form::Form(const Form &src) {
	std::cout << "copy form" << std::endl;
	(*this) = src;
}

Form &Form::operator=(const Form &rhs) {
	if (this != &rhs)
	{
		_signed = rhs._signed;
	}
	return (*this);
}

Form::~Form() {
	std::cout << "destruct form" << std::endl;
}

void Form::beSigned(Bureaucrat &src) {
	if (src.getGrade() <= _requirementSigned)
	{
		_signed = !_signed;
		std::cout << src.getName()
				  << " signed "
				  << _name << std::endl;
	}
	else
	{
		std::cout << src.getName()
				  << " couldn’t sign "
				  << _name
				  << " because grade is to low."
				  << std::endl;
	}
}

std::string getName() const {
	return (_name);
}

bool getSigned() const {

}

int getRequirementSigned() const {

}

int getRequirementExec() const {

}

std::ostream &operator<<(std::ostream &os, const Form &rhs) {
	os	<< Form::getName()
		<< Form::getSigned()
		<< Form::getRequirementSigned()
		<< Form::getRequirementExec();
	return (os);
}
