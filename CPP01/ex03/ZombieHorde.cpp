#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): m_n(n), m_type(std::string())
{
	if (n > 0)
	{
		m_zombie = new Zombie[n];
		for (int i = 0; i < n; i++)
			m_zombie[i].createZombie(m_zombie->randomName(), m_type);
	}
	else
		std::cout << ">> Number of zombies must be > 0" << std::endl;
}

ZombieHorde::ZombieHorde(int n, std::string type): m_n(n), m_type(type)
{
	if (n > 0)
	{
		m_zombie = new Zombie[n];
		for (int i = 0; i < n; i++)
			m_zombie[i].createZombie(m_zombie->randomName(), m_type);
	}
	else
		std::cout << ">> Number of zombies must be > 0" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	if (m_n > 0)
	{
		std::cout << "The " << m_type << "s are being destroyed..." << std::endl;
		delete[] m_zombie;
		std::cout << std::endl;
	}
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < m_n; i++)
		m_zombie[i].advert();
}
