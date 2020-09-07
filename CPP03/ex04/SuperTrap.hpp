#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
	SuperTrap(std::string name);
	~SuperTrap();

	SuperTrap	&operator=(SuperTrap const &b);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
