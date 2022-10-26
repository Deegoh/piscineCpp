#include "../inc/AForm.hpp"
#include <iostream>

#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

void ex00();
void ex01();
void ex02();
void shrubberyCreationForm();
void robotomyRequestForm();

int main() {
//	ex00();
//	ex01();
	ex02();
}

void ex02() {
//	shrubberyCreationForm();
	robotomyRequestForm();
}

void robotomyRequestForm() {
	{
		std::cout << "copy case" << std::endl;
		Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
		RobotomyRequestForm sf = RobotomyRequestForm("Deebot");
		std::cout << sf << std::endl;
		deegoh.signForm(sf);
		std::cout << sf << std::endl;
		RobotomyRequestForm cpy = RobotomyRequestForm(sf);
		std::cout << cpy << std::endl;
		RobotomyRequestForm cpy1;
		cpy1 = RobotomyRequestForm(sf);
		std::cout << cpy1 << std::endl;
		AForm *cpy2 = new RobotomyRequestForm(sf);
		std::cout << *cpy2 << std::endl;
		delete cpy2;
		AForm *cpy3;
		cpy3 = new RobotomyRequestForm(sf);
		std::cout << *cpy3 << std::endl;
		delete cpy3;
	}
	std::cout << std::endl;
	{
		std::cout << "exec RobotomyRequestForm" << std::endl;
		Bureaucrat useless = Bureaucrat("Useless", 150);
		Bureaucrat sign = Bureaucrat("Signer", 70);
		Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
		AForm *scf = new RobotomyRequestForm("Deebot");
		deegoh.signForm(*scf);
		scf->execute(deegoh);
		delete scf;
	}
	std::cout << std::endl;
	{
		std::cout << "Exec Bureaucrat RobotomyRequestForm " << std::endl;
		Bureaucrat useless = Bureaucrat("Useless", 150);
		Bureaucrat sign = Bureaucrat("Signer", 70);
		Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
		AForm *scf = new RobotomyRequestForm("Deebot");
		deegoh.signForm(*scf);
		deegoh.executeForm(*scf);
		deegoh.executeForm(*scf);
		deegoh.executeForm(*scf);
		deegoh.executeForm(*scf);
		delete scf;
	}
	std::cout << std::endl;
	{
		std::cout << "unvalid Exec Bureaucrat RobotomyRequestForm " << std::endl;
		Bureaucrat useless = Bureaucrat("Useless", 150);
		Bureaucrat sign = Bureaucrat("Signer", 70);
		Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
		AForm *scf = new RobotomyRequestForm("Deebot");
		{
			try
			{
				sign.executeForm(*scf);
			}
			catch (RobotomyRequestForm::SignException &se)
			{
				std::cout << se.what() << std::endl;
			}
		}
		{
			try
			{
				sign.signForm(*scf);
				useless.executeForm(*scf);
			}
			catch (RobotomyRequestForm::GradeTooLowException &gtle)
			{
				std::cout << gtle.what() << std::endl;
			}
		}
		delete scf;
	}
}

void shrubberyCreationForm() {
	{
		std::cout << "copy case" << std::endl;
		Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
		ShrubberyCreationForm sf = ShrubberyCreationForm("Jardin");
		std::cout << sf << std::endl;
		deegoh.signForm(sf);
		std::cout << sf << std::endl;
		ShrubberyCreationForm cpy = ShrubberyCreationForm(sf);
		std::cout << cpy << std::endl;
		ShrubberyCreationForm cpy1;
		cpy1 = ShrubberyCreationForm(sf);
		std::cout << cpy1 << std::endl;
		AForm *cpy2 = new ShrubberyCreationForm(sf);
		std::cout << *cpy2 << std::endl;
		delete cpy2;
		AForm *cpy3;
		cpy3 = new ShrubberyCreationForm(sf);
		std::cout << *cpy3 << std::endl;
		delete cpy3;
	}
	std::cout << std::endl;
	{
		std::cout << "exec ShrubberyForm" << std::endl;
		Bureaucrat useless = Bureaucrat("Useless", 150);
		Bureaucrat sign = Bureaucrat("Signer", 140);
		Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
		AForm *scf = new ShrubberyCreationForm("Jardin");
		deegoh.signForm(*scf);
		scf->execute(deegoh);
		delete scf;
	}
	std::cout << std::endl;
	{
		std::cout << "Exec Bureaucrat ShrubberyForm " << std::endl;
		Bureaucrat useless = Bureaucrat("Useless", 150);
		Bureaucrat sign = Bureaucrat("Signer", 140);
		Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
		AForm *scf = new ShrubberyCreationForm("Jardin");
		deegoh.signForm(*scf);
		deegoh.executeForm(*scf);
		delete scf;
	}
	std::cout << std::endl;
	{
		std::cout << "unvalid Exec Bureaucrat ShrubberyForm " << std::endl;
		Bureaucrat useless = Bureaucrat("Useless", 150);
		Bureaucrat sign = Bureaucrat("Signer", 140);
		Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
		AForm *scf = new ShrubberyCreationForm("Jardin");
		{
			try
			{
				sign.executeForm(*scf);
			}
			catch (ShrubberyCreationForm::SignException &se)
			{
				std::cout << se.what() << std::endl;
			}
		}
		{
			try
			{
				sign.signForm(*scf);
				useless.executeForm(*scf);
			}
			catch (ShrubberyCreationForm::GradeTooLowException &gtle)
			{
				std::cout << gtle.what() << std::endl;
			}
		}
		delete scf;
	}
}

void ex01() {
//	{
//		std::cout << "copy case" << std::endl;
//		try
//		{
//			AForm a37 = AForm("a37", 37, 37);
//			std::cout << a37 << std::endl;
//			AForm copy1 = AForm(a37);
//			std::cout << copy1 << std::endl;
//			AForm copy2;
//			copy2 = a37;
//			std::cout << copy2 << std::endl;
//		}
//		catch (AForm::GradeTooLowException &gtle)
//		{
//			std::cout << gtle.what() << std::endl;
//		}
//		catch (AForm::GradeTooHighException &gthe)
//		{
//			std::cout << gthe.what() << std::endl;
//		}
//	}
//	std::cout << std::endl;
//	{
//		std::cout << "sign form valid" << std::endl;
//		try
//		{
//			Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
//			AForm a37 = AForm("a37", 37, 37);
//			std::cout << a37 << std::endl;
//			deegoh.signForm(a37);
//			std::cout << a37 << std::endl;
//		}
//		catch (AForm::GradeTooLowException &gtle)
//		{
//			std::cout << gtle.what() << std::endl;
//		}
//		catch (AForm::GradeTooHighException &gthe)
//		{
//			std::cout << gthe.what() << std::endl;
//		}
//	}
//	std::cout << std::endl;
//	{
//		std::cout << "sign form unvalid" << std::endl;
//		try
//		{
//			Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
//			AForm a37 = AForm("a37", 15, 37);
//			std::cout << a37 << std::endl;
//			deegoh.signForm(a37);
//			std::cout << a37 << std::endl;
//		}
//		catch (AForm::GradeTooLowException &gtle)
//		{
//			std::cout << gtle.what() << std::endl;
//		}
//		catch (AForm::GradeTooHighException &gthe)
//		{
//			std::cout << gthe.what() << std::endl;
//		}
//	}
//	std::cout << std::endl;
//	{
//		std::cout << "edge form valid" << std::endl;
//		try
//		{
//			AForm high = AForm("high", 1, 1);
//			AForm low = AForm("low", 150, 150);
//			std::cout << high << std::endl;
//			std::cout << low << std::endl;
//		}
//		catch (AForm::GradeTooLowException &gtle)
//		{
//			std::cout << gtle.what() << std::endl;
//		}
//		catch (AForm::GradeTooHighException &gthe)
//		{
//			std::cout << gthe.what() << std::endl;
//		}
//	}
//	std::cout << std::endl;
//	{
//		std::cout << "edge form unvalid" << std::endl;
//		try
//		{
//			AForm high = AForm("high", 0, 1);
//		}
//		catch (AForm::GradeTooHighException &gthe)
//		{
//			std::cout << gthe.what() << std::endl;
//		}
//	}
//	{
//		try
//		{
//			AForm high = AForm("high", 1, 0);
//		}
//		catch (AForm::GradeTooHighException &gthe)
//		{
//			std::cout << gthe.what() << std::endl;
//		}
//	}
//	{
//		try
//		{
//			AForm high = AForm("low", 151, 1);
//		}
//		catch (AForm::GradeTooLowException &gthe)
//		{
//			std::cout << gthe.what() << std::endl;
//		}
//	}
//	{
//		try
//		{
//			AForm high = AForm("low", 1, 151);
//		}
//		catch (AForm::GradeTooLowException &gthe)
//		{
//			std::cout << gthe.what() << std::endl;
//		}
//	}
//	std::cout << std::endl;
}

void ex00() {
	{
		std::cout << "normal case" << std::endl;
		try {
			Bureaucrat test = Bureaucrat("mitch", 20);
			std::cout << test << std::endl;
			Bureaucrat test2 = test;
			std::cout << test2 << std::endl;
			Bureaucrat test3 = Bureaucrat("boby", 20);
			std::cout << test3 << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &gtle)
		{
			std::cout << gtle.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "edge case 1" << std::endl;
		try {
			Bureaucrat test = Bureaucrat("low", 150);
			std::cout << test << std::endl;
			Bureaucrat test2 = Bureaucrat("high", 1);
			std::cout << test2 << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &gtle)
		{
			std::cout << gtle.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "low case" << std::endl;
		try {
			Bureaucrat test = Bureaucrat("low", 150);
			std::cout << test << std::endl;
			test.decrementGrade();
			std::cout << "Should not be print!" << std::endl;
			std::cout << test << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &gtle)
		{
			std::cout << gtle.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "high case low" << std::endl;
		try {
			Bureaucrat test = Bureaucrat("high", 1);
			std::cout << test << std::endl;
			test.incrementGrade();
			std::cout << "Should not be print!" << std::endl;
			std::cout << test << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &gtle)
		{
			std::cout << gtle.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "out case 1" << std::endl;
		try {
			Bureaucrat test = Bureaucrat("high", -1);
			std::cout << "Should not be print!" << std::endl;
			std::cout << test << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &gtle)
		{
			std::cout << gtle.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "out case 2" << std::endl;
		try {
			Bureaucrat test = Bureaucrat("low", 151);
			std::cout << "Should not be print!" << std::endl;
			std::cout << test << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &gtle)
		{
			std::cout << gtle.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
}
