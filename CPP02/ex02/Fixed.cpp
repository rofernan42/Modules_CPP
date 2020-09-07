#include "Fixed.hpp"

Fixed::Fixed(): m_nb(0)
{
}

Fixed::Fixed(Fixed const &b)
{
	this->m_nb = b.getRawBits();
}

Fixed::Fixed(int const nb)
{
	m_nb = nb << m_bits;
}

Fixed::Fixed(float const nb)
{
	m_nb = roundf(nb * (1 << m_bits));
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(Fixed const &b)
{
	if (this != &b)
		this->m_nb = b.getRawBits();
	return (*this);
}

bool	Fixed::operator==(Fixed const &b) const
{
	return (this->m_nb == b.getRawBits());
}

bool	Fixed::operator!=(Fixed const &b) const
{
	return (this->m_nb != b.getRawBits());
}

bool	Fixed::operator<=(Fixed const &b) const
{
	return (this->m_nb <= b.getRawBits());
}

bool	Fixed::operator>=(Fixed const &b) const
{
	return (this->m_nb >= b.getRawBits());
}

bool	Fixed::operator<(Fixed const &b) const
{
	return (this->m_nb < b.getRawBits());
}

bool	Fixed::operator>(Fixed const &b) const
{
	return (this->m_nb > b.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &b) const
{
	Fixed res;

	res.setRawBits(this->m_nb + b.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(Fixed const &b) const
{
	Fixed res;

	res.setRawBits(this->m_nb - b.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(Fixed const &b) const
{
	Fixed res;

	res.setRawBits((this->m_nb * b.getRawBits()) >> this->m_bits);
	return (res);
}

Fixed	Fixed::operator/(Fixed const &b) const
{
	Fixed res;

	res.setRawBits((1 << this->m_bits) * this->m_nb / b.m_nb);
	return (res);
}

Fixed	Fixed::operator++()
{
	m_nb = m_nb + 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed res(*this);

	++(*this);
	return (res);
}

Fixed	Fixed::operator--()
{
	m_nb = m_nb - 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed res(*this);

	--(*this);
	return (res);
}

Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	return ((a > b) ? b : a);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	return ((a > b) ? b : a);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	return ((a > b) ? a : b);
}

int	Fixed::getRawBits(void) const
{
	return (m_nb);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed		&min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

const Fixed	&min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed		&max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}

const Fixed	&max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}
