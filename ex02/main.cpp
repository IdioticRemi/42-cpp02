#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "\033[1;35mA\033[0;0m" << std::endl;
	std::cout << a << std::endl;
	std::cout << "\033[1;35m++A / A++\033[0;0m" << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "\033[1;35mA\033[0;0m" << std::endl;
	std::cout << a << std::endl;
	std::cout << "\033[1;35m--A / A--\033[0;0m" << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << "\033[1;35mA AND B\033[0;0m" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "\033[1;35mMIN AND MAX\033[0;0m" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	return 0;
}
