#include "Span.hpp"

Span::Span() : _n(1), _content(){}

Span::Span(unsigned int n) : _n(n), _content() {}

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
		throw Span::NotEnoughSpace();
	_content.push_back(value);
}

void Span::addNumbers(int count, ...) {
	int n = _n;
	if (count > n)
		throw Span::NotEnoughSpace();
	va_list list;
	va_start(list, count);
	for (int i = 0; i < count; i++)
	{
		_content.push_back(va_arg(list, int));
	}
	va_end(list);
}

void Span::addRange(int start, int end) {
	for (int i = start; i <= end; ++i)
	{
		addNumber(i);
	}
}

void Span::addRangeVector(Span sp) {
	std::vector<int>::const_iterator it = sp._content.begin();
	while (it != sp._content.end())
	{
		addNumber(*it);
		it++;
	}
}

int Span::shortestSpan() {
	if (_content.size() <= 1)
		throw Span::NotEnoughNumbers();
	int delta = std::abs(_content[0] - _content[1]);
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
		throw Span::NotEnoughNumbers();
	int max = *max_element(_content.begin(), _content.end());
	int min = *min_element(_content.begin(), _content.end());
	return (max - min);
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

const char *Span::NotEnoughSpace::what() const throw() {
	return ("Span is too small.");
}

const char *Span::NotEnoughNumbers::what() const throw() {
	return ("Span doesn't contain enough numbers.");
}
