#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: public Victim
{
	public:
	Peon(std::string const name);
	Peon(const Peon &copy);
	virtual ~Peon();

	Peon		&operator=(const Peon&);

	virtual void	getPolymorphed(void) const;
};

#endif
