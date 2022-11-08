#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class Span {
public:
	Span();
	Span(unsigned int n);
	Span(const Span &src);
	Span &operator=(const Span &rhs);
	~Span();
//	addnumber to array if too much throw
	void addNumber(int value);
//	return delta if no span or 1 throw
//	shortestSpan();
//	longestSpan();

// ajouter une plage d'iterator

private:
	unsigned int _n;
	int *_content;
};

#endif
