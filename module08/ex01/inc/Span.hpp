#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdarg>

# include <exception>

class Span {
private:
	unsigned int _n;
	std::vector<int> _content;

public:
	Span();
	Span(unsigned int n);
	Span(const Span &src);
	Span &operator=(const Span &rhs);
	~Span();

	void addNumber(int value);
	void addNumbers(int count, ...);
	void addRange(int start, int end);
	void addRangeVector(Span sp);

	int shortestSpan();
	int longestSpan();
	void printContent();

	class NotEnoughSpace : std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class NotEnoughNumbers : std::exception
	{
	public:
		virtual const char *what() const throw();
	};

};

#endif
