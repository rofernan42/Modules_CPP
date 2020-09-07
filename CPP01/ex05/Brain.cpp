#include "Brain.hpp"

Brain::Brain(): m_size(1200), m_IQ(100)
{
}

Brain::~Brain()
{
}

void		Brain::printCharacteristics()
{
	std::cout << "Size (cm3): " << m_size << " IQ: " << m_IQ;
}

std::string	Brain::identify() const
{
	std::string		address;
	std::stringstream	ss;

	ss << this;
	address = ss.str();
	return (address);
}
