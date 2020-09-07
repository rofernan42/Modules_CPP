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
	int		getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int		toInt(void) const;

	private:
	int			m_nb;
	static const int	m_bits = 8;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &b);

#endif
