#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieHorde
{
	public:
	ZombieHorde(int n);
	ZombieHorde(int n, std::string type);
	~ZombieHorde();
	void	announce();

	private:
	Zombie		*m_zombie;
	int		m_n;
	std::string	m_type;
};

#endif
