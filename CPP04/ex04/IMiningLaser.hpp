#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

# include <iostream>
# include <string>
# include "IAsteroid.hpp"

class IMiningLaser
{
	public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid *asteroid) = 0;

	//test fct
	virtual std::string getName() const = 0;
};

#endif
