#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
	AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy):
	AWeapon(copy)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &b)
{
	if (this != &b)
	{
		this->m_name = b.m_name;
		this->m_apcost = b.m_apcost;
		this->m_damage = b.m_damage;
	}
	return (*this);
}

void		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
