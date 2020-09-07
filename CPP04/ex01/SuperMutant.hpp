#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
	SuperMutant();
	SuperMutant(const SuperMutant &copy);
	virtual ~SuperMutant();
	
	SuperMutant	&operator=(const SuperMutant&);

	virtual void	takeDamage(int amount);
};

#endif
