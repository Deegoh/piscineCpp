#include "../inc/span.hpp"
#include "span.hpp"

Span::Span() : _n(1) {
	_content = new int[_n];
	_content[0] = NULL;
	std::cout << _n << std::endl;
}

Span::Span(unsigned int n) : _n(n) {
	_content = new int[_n];
	for (int i = 0; i < _n; ++i)
	{
		_content = NULL;
	}
	std::cout << n << std::endl;
}

Span::Span(const Span &src) {
	_content = NULL;
	(*this) = src;
}

Span &Span::operator=(const Span &rhs) {
	if (&rhs != this)
	{
		_n = rhs._n;
		if (_content)
			delete _content;
		_content = new int[_n];
		for (int i = 0; i < _n; ++i)
		{
			_content = rhs._content;
		}
	}
	return (*this);
}

Span::~Span() {
	delete [] _content;
}

void Span::addNumber(int value) {

}
