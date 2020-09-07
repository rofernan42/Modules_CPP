#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &copy);
	virtual ~PlasmaRifle();

	PlasmaRifle	&operator=(const PlasmaRifle&);
	virtual void	attack() const;
};

#endif
