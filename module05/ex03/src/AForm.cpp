#include "AForm.hpp"

AForm::AForm() :
			_name("AForm"),
			_signed(false),
			_gradeRequirementSigned(150),
			_gradeRequirementExec(150){}

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
//	std::cout << "construct aform " << _name << std::endl;
}

AForm::AForm(const AForm &src) :
			_name(src._name),
			_gradeRequirementSigned(src._gradeRequirementSigned),
			_gradeRequirementExec(src._gradeRequirementExec){
	(*this) = src;
}

AForm &AForm::operator=(const AForm &rhs) {
	if (&rhs != this)
	{
		_signed = rhs._signed;
	}
	return ((*this));
}

AForm::~AForm() {
//	std::cout << "destruct aform" << std::endl;
}

void AForm::beSigned(Bureaucrat &src) {
	if (src.getGrade() <= _gradeRequirementSigned)
	{
		_signed = true;
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

const char* AForm::SignException::what() const throw() {
	return ("Form isn't signed");
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
