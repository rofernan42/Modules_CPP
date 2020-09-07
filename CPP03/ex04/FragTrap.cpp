#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << m_name << ": 'Let me teach you the ways of magic!'" << std::endl;
	m_melee_dam = 30;
	m_range_dam = 20;
	m_armor_red = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &b)
{
	ClapTrap::operator=(b);
	return (*this);
}

void	FragTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	std::cout << m_name << ": 'Extra ouch!' (takes " << amount << " damage)" << std::endl;
	std::cout << "-" << m_armor_red << " damage reduction" << std::endl;
	std::cout << "-" << amount - m_armor_red << " HP " << "(HP is now " << m_hp << ")" << std::endl;

}

void	FragTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	std::cout << m_name << ": 'Sweet life juice!'" << std::endl;
	std::cout << "+" << amount << " HP " << "(HP is now " << m_hp << ")" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attack[5] =
	{
		"Gun Wizard",
		"Torgue Fiesta",
		"Laser Inferno",
		"Meat Unicycle",
		"Shhh... Trap"
	};
	if (m_energy < 25)
		std::cout << m_name << " does not have enough energy! (" << m_energy << "/" << m_max_energy << ")" << std::endl;
	else
	{
		std::cout << m_name << " calls VaultHunter.exe and does " << attack[rand() % 5] << " attack to " << target << " with " << rand() % m_melee_dam << " points of damage!" << std::endl;
		m_energy = m_energy - 25;
		std::cout << "Energy is now " << m_energy << std::endl;
		if (m_energy < 0)
			m_energy = 0;
	}
}
