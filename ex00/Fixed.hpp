#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &ref);
	virtual ~Fixed();

	int getRawBits() const;
	void setRawBits(const int raw);

	Fixed &operator=(const Fixed &rhs);

private:
	int value;
	static const int fractBits = 8;
};


#endif
