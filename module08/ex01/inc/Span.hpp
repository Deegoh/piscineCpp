#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdarg>

class Span {
public:
	Span();
	Span(unsigned int n);
	Span(const Span &src);
	Span &operator=(const Span &rhs);
	~Span();

	void addNumber(int value);
	void addNumbers(int count, ...);
	int shortestSpan();
	int longestSpan();

	void printContent();

// ajouter une plage d'iterator

private:
	unsigned int _n;
	std::vector<int> _content;
};

#endif
