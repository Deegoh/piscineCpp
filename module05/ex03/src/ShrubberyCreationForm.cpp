#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("shrubbery creation", 145, 137),
	_target("DefaultTarget") {
//	std::cout << "construct sf default" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("shrubbery creation", 145, 137),
	_target(target) {
//	std::cout << "construct sf" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {
//	std::cout << "copy sf" << std::endl;
	(*this) = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs){
//	std::cout << "copy =" << std::endl;
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
//	std::cout << "destruct sf" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	std::string trees = "            ,@@@@@@@,\n";
				trees += "    ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
				trees += " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
				trees += ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
				trees += "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
				trees += "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
				trees += "`&%\\ ` /%&'    |.|        \\ '|8'\n";
				trees += "    |o|        | |         | |\n";
				trees += "    |.|        | |         | |\n";
				trees += " \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
	if (getSigned())
	{
		if (executor.getGrade() <= getGradeRequirementExec())
		{
			std::cout << executor.getName()
					  << " executed "
					  << getName() << std::endl;
			std::ofstream ofs((_target + "_shrubbery").c_str());
			ofs << trees << std::endl;
			ofs.close();
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
