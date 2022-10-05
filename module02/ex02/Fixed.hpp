#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(int const nbr_i);
	Fixed(float const nbr_f);
	Fixed(Fixed const &src);
	~Fixed();

	Fixed &operator=(Fixed const &rhs);

//	Fixed &operator>(Fixed const &rhs); // new
//	Fixed &operator>=(Fixed const &rhs); // new
//	Fixed &operator<(Fixed const &rhs); // new
//	Fixed &operator<=(Fixed const &rhs); // new
//	Fixed &operator==(Fixed const &rhs); // new
//	Fixed &operator!=(Fixed const &rhs); // new

//	Fixed &operator+(Fixed const &rhs); // new
//	Fixed &operator-(Fixed const &rhs); // new
//	Fixed &operator*(Fixed const &rhs); // new
//	Fixed &operator/(Fixed const &rhs); // new

	Fixed &operator++(); // new
	Fixed operator++(int); // new
	Fixed &operator--(); // new
	Fixed operator--(int); // new

//	static &Fixed::Fixed min(Fixed &a, Fixed &b); //new
//	static const &Fixed::Fixed min(Fixed &a, Fixed &b); //new
//	static &Fixed::Fixed max(Fixed &a, Fixed &b); //new
//	static const &Fixed::Fixed max(Fixed &a, Fixed &b); //new

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
