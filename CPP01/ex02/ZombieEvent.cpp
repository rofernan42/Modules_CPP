#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(): m_type(std::string())
{
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	m_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie;

	zombie = new Zombie(name, m_type);
	zombie->advert();
	return (zombie);
}

Zombie	*ZombieEvent::randomChump()
{
	Zombie *zombie;
	std::string name;

	zombie = new Zombie(Zombie::randomName(), m_type);
	zombie->advert();
	return (zombie);
}
