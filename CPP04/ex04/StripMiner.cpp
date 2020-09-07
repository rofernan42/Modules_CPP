#include "StripMiner.hpp"

StripMiner::StripMiner()
{
}

StripMiner::StripMiner(const StripMiner &copy)
{
	(void)copy;
}

StripMiner::~StripMiner()
{
}

StripMiner	&StripMiner::operator=(const StripMiner &b)
{
	(void)b;
	return (*this);
}

void		StripMiner::mine(IAsteroid *asteroid)
{
	if (asteroid)
		std::cout << "* strip mining ... got " << asteroid->beMined(this) << " *" << std::endl;
}

//test fct
std::string	StripMiner::getName() const
{
	return ("Strip Miner");
}
