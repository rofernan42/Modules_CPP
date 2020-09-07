#include "Fixed.hpp"

Fixed::Fixed(): m_nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &b)
{
	std::cout << "Copy constructor called" << std::endl;
	this->m_nb = b.getRawBits();

}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &b)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &b)
		this->m_nb = b.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_nb);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_nb = raw;
}
