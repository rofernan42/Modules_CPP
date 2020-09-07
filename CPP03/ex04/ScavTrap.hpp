#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &b);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(std::string const &target);
};

#endif
