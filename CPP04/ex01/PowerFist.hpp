#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
	PowerFist();
	PowerFist(const PowerFist &copy);
	virtual ~PowerFist();

	PowerFist	&operator=(const PowerFist&);
	virtual void	attack() const;
};

#endif
