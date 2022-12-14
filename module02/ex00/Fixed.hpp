#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
public:
	Fixed(); //constructor
	Fixed(Fixed const &src); //copy
	~Fixed(); //destructor

	Fixed &operator=(Fixed const &rhs); // operator

	int getRawBits() const;
	void setRawBits(int const raw);
private:
	int _raw;
	static int const _bits = 8;
};

#endif
