#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <iostream>
# include <string>
class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
	public:
	virtual ~IAsteroid() {}
	virtual std::string	beMined(DeepCoreMiner *miner) const = 0;
	virtual std::string	beMined(StripMiner *miner) const = 0;
	virtual std::string	getName() const = 0;
};

#endif
