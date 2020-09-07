#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
{
	public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap	&operator=(FragTrap const &b);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const &target);
	
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
