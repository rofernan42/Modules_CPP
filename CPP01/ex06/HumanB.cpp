#include "HumanB.hpp"

HumanB::HumanB(std::string name): m_name(name)
{ 
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon const &weapon)
{
	m_weapon = &weapon;
}

void	HumanB::attack() const
{
	std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
}
