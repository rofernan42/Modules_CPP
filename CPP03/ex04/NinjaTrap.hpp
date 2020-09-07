#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
	NinjaTrap(std::string name);
	~NinjaTrap();

	NinjaTrap	&operator=(NinjaTrap const &b);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	void		ninjaShoebox(ClapTrap &clap);
	void		ninjaShoebox(FragTrap &frag);
	void		ninjaShoebox(ScavTrap &scav);
	void		ninjaShoebox(NinjaTrap &ninja);
};

#endif
