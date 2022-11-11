#include "Span.hpp"

int main() {
	{
		std::cout << "span(5){6, 3, 17, 9, 11}" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		try
		{
			sp.addNumber(42);
		}
		catch (Span::NotEnoughSpace &e)
		{
			std::cout << e.what() << std::endl;
		}
		sp.printContent();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "span(5){6, 3}" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.printContent();
	}
	{
		std::cout << "span(5){6}" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (Span::NotEnoughNumbers &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (Span::NotEnoughNumbers &e)
		{
			std::cout << e.what() << std::endl;
		}
		sp.printContent();
	}
	{
		std::cout << "span(5){...}" << std::endl;
		Span sp = Span(5);
		sp.addNumbers(5, 6, 3, 17, 9, 11);
		sp.printContent();
		Span sp1 = Span(20);
		sp1.addRangeVector(sp);
		sp1.addRangeVector(sp);
		sp1.printContent();
	}
}
