#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

void ex00();
void ex01();

int main() {
//	ex00();
	ex01();
}

void ex01() {
	{
		std::cout << "copy case" << std::endl;
		try
		{
			Form a37 = Form("a37", 37, 37);
			std::cout << a37 << std::endl;
			Form copy1 = Form(a37);
			std::cout << copy1 << std::endl;
			Form copy2;
			copy2 = a37;
			std::cout << copy2 << std::endl;
		}
		catch (Form::GradeTooLowException &gtle)
		{
			std::cout << gtle.what() << std::endl;
		}
		catch (Form::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "sign form valid" << std::endl;
		try
		{
			Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
			Form a37 = Form("a37", 37, 37);
			std::cout << a37 << std::endl;
			deegoh.signForm(a37);
			std::cout << a37 << std::endl;
		}
		catch (Form::GradeTooLowException &gtle)
		{
			std::cout << gtle.what() << std::endl;
		}
		catch (Form::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "sign form unvalid" << std::endl;
		try
		{
			Bureaucrat deegoh = Bureaucrat("Deegoh", 20);
			Form a37 = Form("a37", 15, 37);
			std::cout << a37 << std::endl;
			deegoh.signForm(a37);
			std::cout << a37 << std::endl;
		}
		catch (Form::GradeTooLowException &gtle)
		{
			std::cout << gtle.what() << std::endl;
		}
		catch (Form::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "edge form valid" << std::endl;
		try
		{
			Form high = Form("high", 1, 1);
			Form low = Form("low", 150, 150);
			std::cout << high << std::endl;
			std::cout << low << std::endl;
		}
		catch (Form::GradeTooLowException &gtle)
		{
			std::cout << gtle.what() << std::endl;
		}
		catch (Form::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "edge form unvalid" << std::endl;
		try
		{
			Form high = Form("high", 0, 1);
		}
		catch (Form::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	{
		try
		{
			Form high = Form("high", 1, 0);
		}
		catch (Form::GradeTooHighException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	{
		try
		{
			Form high = Form("low", 151, 1);
		}
		catch (Form::GradeTooLowException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	{
		try
		{
			Form high = Form("low", 1, 151);
		}
		catch (Form::GradeTooLowException &gthe)
		{
			std::cout << gthe.what() << std::endl;
		}
	}
	std::cout << std::endl;
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
