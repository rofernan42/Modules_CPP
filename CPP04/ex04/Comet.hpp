#ifndef COMET_HPP
# define COMET_HPP

# include "IAsteroid.hpp"

class Comet: public IAsteroid
{
	public:
	Comet();
	Comet(const Comet &copy);
	virtual ~Comet();

	Comet	&operator=(const Comet&);

	virtual std::string	beMined(DeepCoreMiner *miner) const;
	virtual std::string	beMined(StripMiner *miner) const;
	virtual std::string	getName() const;
};

#endif
