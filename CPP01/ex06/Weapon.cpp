#include "Weapon.hpp"

Weapon::Weapon(): m_type(std::string())
{
}

Weapon::Weapon(std::string type): m_type(type)
{
}

Weapon::~Weapon()
{
}

std::string const	&Weapon::getType() const
{
	return (m_type);
}

void			Weapon::setType(std::string const type)
{
	m_type = type;
}
