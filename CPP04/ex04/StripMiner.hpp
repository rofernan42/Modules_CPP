#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"
class IAsteroid;

class StripMiner: public IMiningLaser
{
	public:
	StripMiner();
	StripMiner(const StripMiner &copy);
	virtual ~StripMiner();

	StripMiner	&operator=(const StripMiner&);

	virtual void	mine(IAsteroid *asteroid);

	//test fct
	std::string	getName() const;
};

#endif
