#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <cstdlib>
# include <iostream>
# include <exception>
# include <sstream>

template<typename T>
class Array {
public:
	Array() {
		_n = 1;
		_array = new T[1];
	}

	Array(unsigned int n) {
		_n = n;
		_array = new T[n];
	}

	Array(const Array &src) {
		_array = NULL;
		*this = src;
	}

	Array &operator=(const Array &rhs) {
		if (&rhs != this)
		{
			_n = rhs._n;
			if (_array)
				delete _array;
			_array = new T[rhs._n];
			for (unsigned int i = 0; i < _n; ++i)
			{
				_array[i] = rhs._array[i];
			}
		}
		return (*this);
	}

	T &operator[](unsigned int n) {
		if (_n <= n)
			throw std::exception();
		return (_array[n]);
	}

	~Array() {
		delete [] _array;
	}

private:
	unsigned int _n;
	T *_array;
};
#endif
