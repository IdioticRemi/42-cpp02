#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &ref) {
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed::Fixed(const float d) {
	std::cout << "Float constructor called" << std::endl;
	rawBits = roundf(d * std::pow(2, fractBits));
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	rawBits = i << fractBits;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		rawBits = rhs.rawBits;
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return rawBits;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	rawBits = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}

int Fixed::toInt() const {
	return (rawBits / pow(2, fractBits));
}

float Fixed::toFloat() const {
	return (rawBits / pow(2, fractBits));
}
