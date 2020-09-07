#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage):
	m_name(name), m_apcost(apcost), m_damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

AWeapon::~AWeapon()
{
}

AWeapon		&AWeapon::operator=(const AWeapon &b)
{
	if (this != &b)
	{
		this->m_name = b.m_name;
		this->m_apcost = b.m_apcost;
		this->m_damage = b.m_damage;
	}
	return (*this);
}

std::string	AWeapon::getName() const
{
	return (m_name);
}

int		AWeapon::getAPCost() const
{
	return (m_apcost);
}

int		AWeapon::getDamage() const
{
	return (m_damage);
}
