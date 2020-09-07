#include "Character.hpp"

Character::Character(std::string const &name):
	m_name(name), m_ap(40), m_weapon(0)
{
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character::~Character()
{
}

Character	&Character::operator=(const Character &b)
{
	if (this != &b)
	{
		this->m_name = b.m_name;
		this->m_ap = b.m_ap;
		this->m_weapon = b.m_weapon;
	}
	return (*this);
}

void		Character::recoverAP()
{
	m_ap = m_ap + 10;
	if (m_ap > 40)
		m_ap = 40;
}

void		Character::equip(AWeapon *weapon)
{
	m_weapon = weapon;
}

void		Character::attack(Enemy *enemy)
{
	if (m_weapon && enemy && m_ap >= m_weapon->getAPCost())
	{
		std::cout << m_name << " attacks " << enemy->getType() << " with a " << m_weapon->getName() << std::endl;
		m_weapon->attack();
		enemy->takeDamage(m_weapon->getDamage());
		std::cout << enemy->getType() << " has " << enemy->getHP() << " HP " << std::endl;
		m_ap = m_ap - m_weapon->getAPCost();
		if (m_ap < 0)
			m_ap = 0;
		if (enemy->getHP() <= 0)
			delete enemy;
	}
	else
	{
		if (!m_weapon)
			std::cout << "No weapon equipped!" << std::endl;
		else if (m_ap < m_weapon->getAPCost())
			std::cout << "Not enough AP to attack!" << std::endl;
		else if (!enemy)
			std::cout << "No enemy to attack!" << std::endl;
	}
}

std::string	Character::getName() const
{
	return (m_name);
}

int		Character::getAP() const
{
	return (m_ap);
}

AWeapon		*Character::getWeapon() const
{
	return (m_weapon);
}

std::ostream	&operator<<(std::ostream &output, const Character &character)
{
	if (character.getWeapon())
		output << character.getName() << " has " << character.getAP() << " AP and carries a " << character.getWeapon()->getName() << std::endl;
	else
		output << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	return (output);
}
