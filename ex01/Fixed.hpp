#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &ref);
	Fixed(const float d);
	Fixed(const int d);

	virtual ~Fixed();

	int getRawBits() const;
	void setRawBits(const int raw);

	int toInt() const;
	float toFloat() const;

	Fixed &operator=(const Fixed &rhs);

private:
	int rawBits;
	static const int fractBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
