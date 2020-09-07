#include "Comet.hpp"

Comet::Comet()
{
}

Comet::Comet(const Comet &copy)
{
	(void)copy;
}

Comet::~Comet()
{
}

Comet		&Comet::operator=(const Comet &b)
{
	(void)b;
	return (*this);
}

std::string	Comet::beMined(DeepCoreMiner *miner) const
{
	if (miner)
		return ("Mithril");
	return (NULL);
}

std::string	Comet::beMined(StripMiner *miner) const
{
	if (miner)
		return ("Tartarite");
	return (NULL);
}

std::string	Comet::getName() const
{
	return ("Comet");
}
