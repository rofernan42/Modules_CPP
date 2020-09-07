#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const name, std::string const title): m_name(name), m_title(title)
{
	std::cout << m_name << ", " << m_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

Sorcerer::~Sorcerer()
{
	std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &b)
{
	if (this != &b)
	{
		this->m_name = b.m_name;
		this->m_title = b.m_title;
	}
	return (*this);
}

std::string	Sorcerer::getName(void) const
{
	return (m_name);
}

std::string	Sorcerer::getTitle(void) const
{
	return (m_title);
}

void		Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &output, const Sorcerer &sorcerer)
{
	output << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (output);
}
