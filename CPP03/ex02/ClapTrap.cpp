#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): m_hp(100), m_max_hp(100), m_energy(100), m_max_energy(100), m_level(1), m_name(name), m_melee_dam(0), m_range_dam(0), m_armor_red(0)
{
	std::cout << "ClapTrap " << m_name << " constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << m_name << " destroyed" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &b)
{
	if (this != &b)
	{
		this->m_hp = b.m_hp;
		this->m_max_hp = b.m_max_hp;
		this->m_energy = b.m_energy;
		this->m_max_energy = b.m_max_energy;
		this->m_level = b.m_level;
		this->m_melee_dam = b.m_melee_dam;
		this->m_range_dam = b.m_range_dam;
		this->m_armor_red = b.m_armor_red;
	}
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << m_name 
		<< " attacks " << target 
		<< " at range, causing " << m_range_dam << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << m_name 
		<< " attacks " << target 
		<< " at melee, causing " << m_melee_dam << " points of damage!" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	m_hp = m_hp - amount + m_armor_red;
	if (m_hp < 0)
		m_hp = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	m_hp = m_hp + amount;
	if (m_hp > m_max_hp)
		m_hp = m_max_hp;
}

void	ClapTrap::display(void) const
{
	std::cout << "\t     name: " << m_name << std::endl;
	std::cout << "\t       HP: " << m_hp << std::endl;
	std::cout << "\t   max HP: " << m_max_hp << std::endl;
	std::cout << "\t     Engy: " << m_energy << std::endl;
	std::cout << "\t max Engy: " << m_max_energy << std::endl;
	std::cout << "\t    level: " << m_level << std::endl;
	std::cout << "\tmelee dam: " << m_melee_dam << std::endl;
	std::cout << "\trange dam: " << m_range_dam << std::endl;
	std::cout << "\tarmor red: " << m_armor_red << std::endl;
}
