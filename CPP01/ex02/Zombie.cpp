#include "Zombie.hpp"

Zombie::Zombie(): m_name(std::string()), m_type(std::string())
{
}

Zombie::Zombie(std::string name, std::string type): m_name(name), m_type(type)
{
}

Zombie::~Zombie()
{
	std::cout << "\tZombie <" << m_name << " (" << m_type << ")> is destroyed" << std::endl;
}

void	Zombie::advert()
{
	std::cout << "\t<" << m_name << " (" << m_type << ")> Braiiiiiiinnnsss..." << std::endl;
}

void	Zombie::createZombie(std::string name, std::string type)
{
	m_name = name;
	m_type = type;
	Zombie::advert();
}

std::string	Zombie::randomName()
{
	std::string		name;
	static const int	len = 7;
	std::string		letters[2] = {"abcdefghijklmnopqrstuvwxyz", "aeiouy"};
	static const size_t	letterslen[2] = {letters[0].size(), letters[1].size()};

	for (int i = 0; i < len; i++)
		name += letters[i % 2][rand() % letterslen[i % 2]];
	name[0] = std::toupper(name[0]);
	return (name);
}
