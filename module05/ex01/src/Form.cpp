#include "Form.hpp"

Form::Form() :
		_name("low"),
		_signed(false),
		_gradeRequirementSigned(150),
		_gradeRequirementExec(150) {
//	std::cout << "construct form" << std::endl;
}

Form::Form(std::string name, int requirementSigned, int requirementExec) :
			_name(name),
			_signed(false),
			_gradeRequirementSigned(requirementSigned),
			_gradeRequirementExec(requirementExec) {
	if (_gradeRequirementSigned < 1 || _gradeRequirementExec < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (_gradeRequirementSigned > 150 || _gradeRequirementExec > 150)
	{
		throw Form::GradeTooLowException();
	}
//	std::cout << "construct form" << std::endl;
}

Form::Form(const Form &src) :
		_name(src.getName()),
		_gradeRequirementSigned(src.getGradeRequirementSigned()),
		_gradeRequirementExec(src.getGradeRequirementExec()) {
//	std::cout << "copy form" << std::endl;
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
//	std::cout << "destruct form" << std::endl;
}

void Form::beSigned(Bureaucrat &src) {
	if (src.getGrade() <= _gradeRequirementSigned)
	{
		_signed = !_signed;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

std::string Form::getName() const {
	return (_name);
}

bool Form::getSigned() const {
	return (_signed);
}

int Form::getGradeRequirementSigned() const {
	return (_gradeRequirementSigned);
}

int Form::getGradeRequirementExec() const {
	return (_gradeRequirementExec);
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade is to Low !");
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade is to High !");
}
std::ostream &operator<<(std::ostream &os, const Form &rhs) {
	std::string isSigned;
	if (rhs.getSigned())
		isSigned = "true";
	else
		isSigned = "false";
	os	<< rhs.getName() << ", status signed: "
		<< isSigned << ", requirement for signed: "
		<< rhs.getGradeRequirementSigned() << ", requirement for exec: "
		<< rhs.getGradeRequirementExec();
	return (os);
}
