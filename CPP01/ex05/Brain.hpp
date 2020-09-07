#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain
{
	public:
	Brain();
	~Brain();
	void		printCharacteristics();
	std::string	identify() const;

	private:
	int		m_size;
	int		m_IQ;
};

#endif
