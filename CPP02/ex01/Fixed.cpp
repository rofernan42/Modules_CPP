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

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	m_nb = nb << m_bits;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	m_nb = roundf(nb * (1 << m_bits));
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

float	Fixed::toFloat(void) const
{
	return ((float)m_nb / (float)(1 << m_bits));
}

int	Fixed::toInt(void) const
{
	return ((int)(m_nb >> m_bits));
}

std::ostream	&operator<<(std::ostream &output, Fixed const &b)
{
	output << b.toFloat();
	return (output);
}
