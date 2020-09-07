#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack() const;

	private:
	std::string	m_name;
	Weapon		&m_weapon;
};

#endif
