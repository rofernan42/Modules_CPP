#include "Victim.hpp"

Victim::Victim(std::string const name): m_name(name)
{
	std::cout << "A random victim called " << m_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim::~Victim()
{
	std::cout << "The victim " << m_name << " died for no apparent reason!" << std::endl;
}

Victim		&Victim::operator=(const Victim &b)
{
	if (this != &b)
	{
		this->m_name = b.m_name;
	}
	return (*this);
}

std::string	Victim::getName(void) const
{
	return (m_name);
}

void		Victim::getPolymorphed(void) const
{
	std::cout << m_name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream	&operator<<(std::ostream &output, const Victim &victim)
{
	output << "I'm " << victim.getName() << ", and I like otters!" << std::endl;
	return (output);
}
