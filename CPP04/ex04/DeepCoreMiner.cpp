#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &copy)
{
	(void)copy;
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner	&DeepCoreMiner::operator=(const DeepCoreMiner &b)
{
	(void)b;
	return (*this);
}

void		DeepCoreMiner::mine(IAsteroid *asteroid)
{
	if (asteroid)
		std::cout << "* mining deep ... got " << asteroid->beMined(this) << " *" << std::endl;
}

//test fct
std::string	DeepCoreMiner::getName() const
{
	return ("Deep Core Miner");
}
