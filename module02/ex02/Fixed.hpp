#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed(); //constructor
	Fixed(int const nbr_i);
	Fixed(float const nbr_f);
	Fixed(Fixed const &src); //copy
	~Fixed(); //destructor

	Fixed &operator=(Fixed const &rhs); // operator

	int getRawBits() const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:
	int _raw;
	static int const _bits = 8;
};

std::ostream &operator<<(std::ostream & o, Fixed const &rhs); // operator

#endif
