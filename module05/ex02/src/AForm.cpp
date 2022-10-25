#include "AForm.hpp"
#include "../inc/AForm.hpp"

AForm::AForm() :
		_name("low"),
		_signed(false),
		_gradeRequirementSigned(150),
		_gradeRequirementExec(150) {
//	std::cout << "construct form" << std::endl;
}

AForm::AForm(std::string name, int requirementSigned, int requirementExec) :
			_name(name),
			_signed(false),
			_gradeRequirementSigned(requirementSigned),
			_gradeRequirementExec(requirementExec) {
	if (_gradeRequirementSigned < 1 || _gradeRequirementExec < 1)
	{
		throw AForm::GradeTooHighException();
	}
	else if (_gradeRequirementSigned > 150 || _gradeRequirementExec > 150)
	{
		throw AForm::GradeTooLowException();
	}
//	std::cout << "construct form" << std::endl;
}

AForm::AForm(const AForm &src) :
		_name(src.getName()),
		_gradeRequirementSigned(src.getGradeRequirementSigned()),
		_gradeRequirementExec(src.getGradeRequirementExec()) {
//	std::cout << "copy form" << std::endl;
	(*this) = src;
}

AForm &AForm::operator=(const AForm &rhs) {
	if (this != &rhs)
	{
		_signed = rhs._signed;
	}
	return (*this);
}

AForm::~AForm() {
//	std::cout << "destruct form" << std::endl;
}

void AForm::beSigned(Bureaucrat &src) {
	if (src.getGrade() <= _gradeRequirementSigned)
	{
		_signed = !_signed;
	}
	else
	{
		throw AForm::GradeTooLowException();
	}
}

std::string AForm::getName() const {
	return (_name);
}

bool AForm::getSigned() const {
	return (_signed);
}

int AForm::getGradeRequirementSigned() const {
	return (_gradeRequirementSigned);
}

int AForm::getGradeRequirementExec() const {
	return (_gradeRequirementExec);
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade is to Low !");
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade is to High !");
}
std::ostream &operator<<(std::ostream &os, const AForm &rhs) {
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
