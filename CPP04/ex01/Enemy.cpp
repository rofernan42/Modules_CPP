#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type):
	m_hp(hp), m_type(type)
{
}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

Enemy::~Enemy()
{
}

Enemy		&Enemy::operator=(const Enemy &b)
{
	if (this != &b)
	{
		this->m_hp = b.m_hp;
		this->m_type = b.m_type;
	}
	return (*this);
}

std::string	Enemy::getType() const
{
	return (m_type);
}

int		Enemy::getHP() const
{
	return (m_hp);
}

void		Enemy::takeDamage(int amount)
{
	if (amount < 0)
		return ;
	m_hp = m_hp - amount;
	if (m_hp < 0)
		m_hp = 0;
}
