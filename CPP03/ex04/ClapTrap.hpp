#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap	&operator=(ClapTrap const &b);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName(void) const;
	void		display(void) const;

	protected:
	int		m_hp;
	int		m_max_hp;
	int		m_energy;
	int		m_max_energy;
	int		m_level;
	std::string	m_name;
	int		m_melee_dam;
	int		m_range_dam;
	int		m_armor_red;
};

#endif
