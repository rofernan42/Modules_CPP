#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap
{
	public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap	&operator=(ScavTrap const &b);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(std::string const &target);
	
	private:
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
