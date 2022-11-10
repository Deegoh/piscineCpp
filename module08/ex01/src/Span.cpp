#include "../inc/span.hpp"
#include "span.hpp"

Span::Span() : _n(1), _content(){
//	_content = new int[_n];
//	_content[0] = 0;
//	_currentN = 0;
//	std::cout << _n << std::endl;
}

Span::Span(unsigned int n) : _n(n), _content() {
//	std::cout << _n << std::endl;
}

Span::Span(const Span &src) {
	(*this) = src;
}

Span &Span::operator=(const Span &rhs) {
	if (&rhs != this)
	{
		_n = rhs._n;
		_content = rhs._content;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int value) {
	if (_content.size() >= _n)
		throw std::exception();
	_content.push_back(value);
}

void Span::addNumbers(int count, ...) {
	int n = _n;
	if (count > n)
		throw std::exception();
	va_list list;
	va_start(list, count);
	for (int i = 0; i < count; i++)
	{
		_content.push_back(va_arg(list, int));
	}
	va_end(list);
}

void Span::printContent() {
	for (unsigned int i = 0; i < _content.size(); ++i)
	{
		if (i != 0)
			std::cout << ", ";
		std::cout << _content[i];
	}
	std::cout << std::endl;
}

int Span::shortestSpan() {
	if (_content.size() <= 1)
		throw std::exception();
	int delta;
	for (unsigned int i = 0; i < _content.size(); ++i)
	{
		for (unsigned int j = i + 1; j < _content.size(); ++j)
		{
			if (delta > std::abs(_content[i] - _content[j]))
				delta = std::abs(_content[i] - _content[j]);
		}
	}
	return (delta);
}

int Span::longestSpan() {
	if (_content.size() <= 1)
		throw std::exception();
	int max = *max_element(_content.begin(), _content.end());
	int min = *min_element(_content.begin(), _content.end());
	return (max - min);
}
