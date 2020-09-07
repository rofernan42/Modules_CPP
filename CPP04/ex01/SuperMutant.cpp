#include "SuperMutant.hpp"

SuperMutant::SuperMutant():
	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy):
	Enemy(copy)
{
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant		&SuperMutant::operator=(const SuperMutant &b)
{
	if (this != &b)
	{
		this->m_hp = b.m_hp;
		this->m_type = b.m_type;
	}
	return (*this);
}

void		SuperMutant::takeDamage(int amount)
{
	amount = amount - 3;
	Enemy::takeDamage(amount);
}
