#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include "IAsteroid.hpp"

class Asteroid: public IAsteroid
{
	public:
	Asteroid();
	Asteroid(const Asteroid &copy);
	virtual ~Asteroid();

	Asteroid	&operator=(const Asteroid&);

	virtual std::string	beMined(DeepCoreMiner *miner) const;
	virtual std::string	beMined(StripMiner *miner) const;
	virtual std::string	getName() const;
};

#endif
