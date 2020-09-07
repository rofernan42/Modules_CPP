#include "PowerFist.hpp"

PowerFist::PowerFist():
	AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &copy):
	AWeapon(copy)
{
}

PowerFist::~PowerFist()
{
}

PowerFist	&PowerFist::operator=(const PowerFist &b)
{
	if (this != &b)
	{
		this->m_name = b.m_name;
		this->m_apcost = b.m_apcost;
		this->m_damage = b.m_damage;
	}
	return (*this);
}

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
