#include "Fixed.hpp"

int	main(void)
{
	/* subject main */

	Fixed	a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	/* personnal main */

	std::cout << std::endl;
	Fixed		e(10);

	std::cout << e << std::endl;
	std::cout << ++e << std::endl;

	Fixed		c(5.42f);
	Fixed const	d(Fixed(5.05f) * Fixed(2));

	std::cout << "c  : " << c << std::endl;
	std::cout << "++c: " << ++c << std::endl;
	std::cout << "c  : " << c << std::endl;
	std::cout << "c++: " << c++ << std::endl;
	std::cout << "c  : " << c << std::endl;
	std::cout << std::endl;
	std::cout << "c  : " << c << std::endl;
	std::cout << "--c: " << --c << std::endl;
	std::cout << "c  : " << c << std::endl;
	std::cout << "c--: " << c-- << std::endl;
	std::cout << "c  : " << c << std::endl;
	std::cout << std::endl;
	std::cout << "c  : " << c << std::endl;
	std::cout << "d  : " << d << std::endl;

	std::cout << "max(c, d): " << max(c, d) << std::endl;
	std::cout << "min(c, d): " << min(c, d) << std::endl;

	std::cout << std::endl;
	std::cout << "c + d: " << c + d << std::endl;
	std::cout << "c - d: " << c - d << std::endl;
	std::cout << "d - c: " << d - c << std::endl;
	std::cout << "c * d: " << c * d << std::endl;
	std::cout << "c / d: " << c / d << std::endl;
	std::cout << "d / c: " << d / c << std::endl;
	std::cout << "c  : " << c << std::endl;
	std::cout << "d  : " << d << std::endl;

	return (0);
}
