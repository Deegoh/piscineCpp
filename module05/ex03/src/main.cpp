#include <iostream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void ex00();
void ex01();
void ex02();
void ex03();
void shrubberyCreationForm();
void robotomyRequestForm();
void presidentialPardonForm();
void all();

int main() {
//	ex00();
//	ex01();
//	ex02();
//	ex03();
	all();
}

void all() {
	{
		{
			Bureaucrat bill = Bureaucrat("bill", 10);
			Bureaucrat *bob;
			try
			{
				bob = new Bureaucrat("bob", -1);
				delete bob;
			}
			catch (Bureaucrat::GradeTooHighException &e)
			{
				std::cout << "Error 1 " << e.what() << std::endl;
			}
			catch (Bureaucrat::GradeTooLowException &e)
			{
				std::cout << "Error 2 " << e.what() << std::endl;
			}
			try
			{
				bob = new Bureaucrat("bob", 320);
				delete bob;
			}
			catch (Bureaucrat::GradeTooHighException &e)
			{
				std::cout << "Error 1 " << e.what() << std::endl;
			}
			catch (Bureaucrat::GradeTooLowException &e)
			{
				std::cout << "Error 2 " << e.what() << std::endl;
			}
			try
			{
				bob = new Bureaucrat("bob", 320);
				delete bob;
			}
			catch (std::exception &e)
			{
				std::cout << "Error 0 " << e.what() << std::endl;
			}
			try
			{
				bob = new Bureaucrat("bob", 42);
				std::cout << *bob << std::endl;
				delete bob;
			}
			catch (Bureaucrat::GradeTooHighException &e)
			{
				std::cout << "Error 1 " << e.what() << std::endl;
			}
			catch (Bureaucrat::GradeTooLowException &e)
			{
				std::cout << "Error 2 " << e.what() << std::endl;
			}
		}
		std::cout << std::endl << "END PART 1" << std::endl << std::endl;
/*	{

		Bureaucrat bill = Bureaucrat("bill", 10);
		Bureaucrat *bob = new Bureaucrat("bob", 42);

		Form *impot;

		try
		{
			impot = new Form("impot", 160, 22);
			std::cout << "DEBUG impot created" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Error 0 " << e.what() << std::endl;
		}

		try
		{
			impot = new Form("impot", 32, -1);
			std::cout << "DEBUG impot created" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Error 0 " << e.what() << std::endl;
		}

		try
		{
			impot = new Form("impot", 32, 22);
			std::cout << "DEBUG impot created" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Error 0 " << e.what() << std::endl;
		}
		std::cout << std::endl;


		try
		{
			impot->beSigned(*bob);
			std::cout << "DEBUG bob signed impot" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Error 0 " << e.what() << std::endl;
		}


		std::cout << *impot << std::endl;

		try
		{
			impot->beSigned(bill);
			std::cout << "DEBUG bill signed impot" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Error 0 " << e.what() << std::endl;
		}

		std::cout << *impot << std::endl;


		bob->signForm(*impot);
		bill.signForm(*impot);

		Form *paie = new Form("Paie", 10, 10);
		*paie = *impot;

		delete bob;
		delete impot;

		std::cout << *paie << std::endl;
		delete paie;
	}

	std::cout << std::endl << "END PART 2" << std::endl << std::endl;
*/

		{
			Bureaucrat useless = Bureaucrat("useless", 150);
			Bureaucrat cansign = Bureaucrat("cansign", 140);
			Bureaucrat bill = Bureaucrat("bill", 10);

			ShrubberyCreationForm *newform = new ShrubberyCreationForm(
					"testfile");
			bill.signForm(*newform);

			ShrubberyCreationForm newform2 = *newform;
			delete newform;

			std::cout << std::endl;

			std::cout << "end now" << std::endl;
			useless.signForm(newform2);
			useless.executeForm(newform2);
			std::cout << "dont print that" << std::endl;

			cansign.signForm(newform2);
			cansign.executeForm(newform2);

			bill.signForm(newform2);
			bill.executeForm(newform2);
			std::cout << std::endl;
		}

		std::cout << std::endl << "END PART 3" << std::endl << std::endl;


		{
			Bureaucrat useless = Bureaucrat("useless", 150);
			Bureaucrat cansign = Bureaucrat("cansign", 60);
			Bureaucrat bill = Bureaucrat("bill", 10);

			RobotomyRequestForm *newform = new RobotomyRequestForm("eduardo");

			std::cout << std::endl;

			useless.signForm(*newform);
			useless.executeForm(*newform);

			cansign.signForm(*newform);
			cansign.executeForm(*newform);

			bill.signForm(*newform);
			bill.executeForm(*newform);

			bill.executeForm(*newform);
			bill.executeForm(*newform);
			bill.executeForm(*newform);
			bill.executeForm(*newform);
			bill.executeForm(*newform);
			std::cout << std::endl;

			delete newform;
		}

		std::cout << std::endl << "END PART 4" << std::endl << std::endl;

		{
			Bureaucrat useless = Bureaucrat("useless", 150);
			Bureaucrat cansign = Bureaucrat("cansign", 10);
			Bureaucrat bill = Bureaucrat("bill", 1);

			PresidentialPardonForm *newform = new PresidentialPardonForm(
					"eduardo");

			std::cout << std::endl;

			useless.signForm(*newform);
			useless.executeForm(*newform);

			cansign.signForm(*newform);
			cansign.executeForm(*newform);

			bill.signForm(*newform);
			bill.executeForm(*newform);
			std::cout << std::endl;

			delete newform;
		}

		std::cout << std::endl << "END PART 5" << std::endl << std::endl;


		{
			Bureaucrat bill = Bureaucrat("bill", 1);

			Intern someRandomIntern;

			AForm *rrf;
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
			std::cout << std::endl;

			if (rrf != NULL)
			{
				bill.signForm(*rrf);
				bill.executeForm(*rrf);
				std::cout << std::endl;

				delete rrf;
			}
			std::cout << std::endl;


			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			std::cout << std::endl;

			if (rrf != NULL)
			{
				bill.signForm(*rrf);
				bill.executeForm(*rrf);
				std::cout << std::endl;

				delete rrf;
			}
			std::cout << std::endl;


			rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
			std::cout << std::endl;

			if (rrf != NULL)
			{
				bill.signForm(*rrf);
				bill.executeForm(*rrf);
				std::cout << std::endl;

				delete rrf;
			}
			std::cout << std::endl;


			rrf = someRandomIntern.makeForm("blip blap bloup form",
											"Not exists");
			std::cout << std::endl;

			if (rrf != NULL)
			{
				bill.signForm(*rrf);
				bill.executeForm(*rrf);
				std::cout << std::endl;

				delete rrf;
			}
			std::cout << std::endl;
		}

		std::cout << std::endl << "END PART 6" << std::endl << std::endl;
	}
}

void ex03 () {
	Bureaucrat bill = Bureaucrat("bill", 1);

	Intern someRandomIntern;

	AForm *rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	std::cout << std::endl;

	if (rrf != NULL)
	{
		bill.signForm(*rrf);
		bill.executeForm(*rrf);
		std::cout << std::endl;

		delete rrf;
	}
	std::cout << std::endl;


	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << std::endl;

	if (rrf != NULL)
	{
		bill.signForm(*rrf);
		bill.executeForm(*rrf);
		std::cout << std::endl;

		delete rrf;
	}
	std::cout << std::endl;


	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	std::cout << std::endl;

	if (rrf != NULL)
	{
		bill.signForm(*rrf);
		bill.executeForm(*rrf);
		std::cout << std::endl;

		delete rrf;
	}
	std::cout << std::endl;


	rrf = someRandomIntern.makeForm("blip blap bloup form",
									"Not exists");
	std::cout << std::endl;

	if (rrf != NULL)
	{
		bill.signForm(*rrf);
		bill.executeForm(*rrf);
		std::cout << std::endl;

		delete rrf;
	}
	std::cout << std::endl;
}

void ex02() {
	shrubberyCreationForm();
	robotomyRequestForm();
	presidentialPardonForm();
}

void presidentialPardonForm() {
	{
		std::cout << "copy case" << std::endl;
		Bureaucrat deegoh = Bureaucrat("Deegoh", 2);
		PresidentialPardonForm sf = PresidentialPardonForm("Capitain");
		std::cout << sf << std::endl;
		deegoh.signForm(sf);
		std::cout << sf << std::endl;
		PresidentialPardonForm cpy = PresidentialPardonForm(sf);
		std::cout << cpy << std::endl;
		PresidentialPardonForm cpy1;
		cpy1 = PresidentialPardonForm(sf);
		std::cout << cpy1 << std::endl;
		AForm *cpy2 = new PresidentialPardonForm(sf);
		std::cout << *cpy2 << std::endl;
		delete cpy2;
		AForm *cpy3;
		cpy3 = new PresidentialPardonForm(sf);
		std::cout << *cpy3 << std::endl;
		delete cpy3;
	}
	std::cout << std::endl;
	{
		std::cout << "exec PresidentialPardonForm" << std::endl;
		Bureaucrat useless = Bureaucrat("Useless", 150);
		Bureaucrat sign = Bureaucrat("Signer", 20);
		Bureaucrat deegoh = Bureaucrat("Deegoh", 2);
		AForm *scf = new PresidentialPardonForm("Capitain");
		deegoh.signForm(*scf);
		scf->execute(deegoh);
		delete scf;
	}
	std::cout << std::endl;
	{
		std::cout << "Exec Bureaucrat PresidentialPardonForm " << std::endl;
		Bureaucrat useless = Bureaucrat("Useless", 150);
		Bureaucrat sign = Bureaucrat("Signer", 20);
		Bureaucrat deegoh = Bureaucrat("Deegoh", 2);
		AForm *scf = new PresidentialPardonForm("Capitain");
		deegoh.signForm(*scf);
		deegoh.executeForm(*scf);
		delete scf;
	}
	std::cout << std::endl;
	{
		std::cout << "unvalid Exec Bureaucrat PresidentialPardonForm " << std::endl;
		Bureaucrat useless = Bureaucrat("Useless", 150);
		Bureaucrat sign = Bureaucrat("Signer", 20);
		Bureaucrat deegoh = Bureaucrat("Deegoh", 2);
		AForm *scf = new PresidentialPardonForm("Capitain");
		{
			try
			{
				sign.executeForm(*scf);
			}
			catch (PresidentialPardonForm::SignException &se)
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
			catch (PresidentialPardonForm::GradeTooLowException &gtle)
			{
				std::cout << gtle.what() << std::endl;
			}
		}
		delete scf;
	}
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
