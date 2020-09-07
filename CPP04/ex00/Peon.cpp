#include "Peon.hpp"

Peon::Peon(std::string const name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &copy): Victim(copy)
{
	*this = copy;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon		&Peon::operator=(const Peon &b)
{
	if (this != &b)
	{
		return (*this);
	}
	return (*this);
}

void		Peon::getPolymorphed(void) const
{
	std::cout << Victim::getName() << " was just polymorphed into a pink pony!" << std::endl;
}
