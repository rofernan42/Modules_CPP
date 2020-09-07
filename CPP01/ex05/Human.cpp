#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const Brain	&Human::getBrain()
{
	return (m_brain);
}

std::string	Human::identify()
{
	std::string address;

	address = m_brain.identify();
	return (address);
}
