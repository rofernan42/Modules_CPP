#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): m_hp(100), m_max_hp(100), m_energy(100), m_max_energy(100), m_level(1), m_name(name), m_melee_dam(30), m_range_dam(20), m_armor_red(5)
{
	std::cout << m_name << ": 'Let me teach you the ways of magic!'" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &b)
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

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << m_name 
		<< " attacks " << target 
		<< " at range, causing " << m_range_dam << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << m_name 
		<< " attacks " << target 
		<< " at melee, causing " << m_melee_dam << " points of damage!" << std::endl;

}

void	FragTrap::takeDamage(unsigned int amount)
{
	m_hp = m_hp - amount + m_armor_red;
	if (m_hp < 0)
		m_hp = 0;
	std::cout << m_name << ": 'Extra ouch!' (takes " << amount << " damage)" << std::endl;
	std::cout << "-" << m_armor_red << " damage reduction" << std::endl;
	std::cout << "-" << amount - m_armor_red << " HP " << "(HP is now " << m_hp << ")" << std::endl;

}

void	FragTrap::beRepaired(unsigned int amount)
{
	m_hp = m_hp + amount;
	if (m_hp > m_max_hp)
		m_hp = m_max_hp;
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
