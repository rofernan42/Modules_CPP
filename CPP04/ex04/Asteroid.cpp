#include "Asteroid.hpp"

Asteroid::Asteroid()
{
}

Asteroid::Asteroid(const Asteroid &copy)
{
	(void)copy;
}

Asteroid::~Asteroid()
{
}

Asteroid	&Asteroid::operator=(const Asteroid &b)
{
	(void)b;
	return (*this);
}

std::string	Asteroid::beMined(DeepCoreMiner *miner) const
{
	if (miner)
		return ("Dragonite");
	return (NULL);
}

std::string	Asteroid::beMined(StripMiner *miner) const
{
	if (miner)
		return ("Flavium");
	return (NULL);
}

std::string	Asteroid::getName() const
{
	return ("Asteroid");
}
