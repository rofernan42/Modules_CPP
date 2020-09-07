#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
	Fixed();
	Fixed(Fixed const &b);
	Fixed(int const nb);
	Fixed(float const nb);
	~Fixed();

	Fixed		&operator=(Fixed const &b);
	bool		operator==(Fixed const &b) const;
	bool		operator!=(Fixed const &b) const;
	bool		operator<=(Fixed const &b) const;
	bool		operator>=(Fixed const &b) const;
	bool		operator<(Fixed const &b) const;
	bool		operator>(Fixed const &b) const;

	Fixed		operator+(Fixed const &b) const;
	Fixed		operator-(Fixed const &b) const;
	Fixed		operator*(Fixed const &b) const;
	Fixed		operator/(Fixed const &b) const;
	
	Fixed		operator++();		//++a
	Fixed		operator++(int);	//a++
	Fixed		operator--();		//--a
	Fixed		operator--(int);	//a--

	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);

	int		getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int		toInt(void) const;

	private:
	int			m_nb;
	static const int	m_bits = 8;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &b);
Fixed		&min(Fixed &a, Fixed &b);
const Fixed	&min(Fixed const &a, Fixed const &b);
Fixed		&max(Fixed &a, Fixed &b);
const Fixed	&max(Fixed const &a, Fixed const &b);

#endif
