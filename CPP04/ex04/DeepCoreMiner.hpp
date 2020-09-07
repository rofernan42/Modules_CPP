#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"
class IAsteroid;

class DeepCoreMiner: public IMiningLaser
{
	public:
	DeepCoreMiner();
	DeepCoreMiner(const DeepCoreMiner &copy);
	virtual ~DeepCoreMiner();

	DeepCoreMiner	&operator=(const DeepCoreMiner&);

	virtual void	mine(IAsteroid *asteroid);

	//test fct
	std::string	getName() const;
};

#endif
