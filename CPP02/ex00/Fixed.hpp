#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
	Fixed();
	Fixed(Fixed const &b);
	~Fixed();
	Fixed	&operator=(Fixed const &b);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	private:
	int			m_nb;
	static const int	m_bits = 8;
};

#endif
