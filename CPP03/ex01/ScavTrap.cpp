#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): m_hp(100), m_max_hp(100), m_energy(50), m_max_energy(50), m_level(1), m_name(name), m_melee_dam(20), m_range_dam(15), m_armor_red(3)
{
	std::cout << m_name << ": 'Let's get this party started!'" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "I'm too pretty to die!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &b)
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

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << m_name 
		<< " attacks " << target 
		<< " at range, causing " << m_range_dam << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << m_name 
		<< " attacks " << target 
		<< " at melee, causing " << m_melee_dam << " points of damage!" << std::endl;

}

void	ScavTrap::takeDamage(unsigned int amount)
{
	m_hp = m_hp - amount + m_armor_red;
	if (m_hp < 0)
		m_hp = 0;
	std::cout << m_name << ": 'Shwing!' (takes " << amount << " damage)" << std::endl;
	std::cout << "-" << m_armor_red << " damage reduction" << std::endl;
	std::cout << "-" << amount - m_armor_red << " HP " << "(HP is now " << m_hp << ")" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	m_hp = m_hp + amount;
	if (m_hp > m_max_hp)
		m_hp = m_max_hp;
	std::cout << m_name << ": 'Health! Eww, what flavor is red?'" << std::endl;
	std::cout << "+" << amount << " HP " << "(HP is now " << m_hp << ")" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string challenge[5] =
	{
		"Pull the Pin",
		"Badass Bingo",
		"Hit-and-Fun",
		"...I Got to Boogie",
		"Compl33tionist"
	};
	std::cout << m_name << ": " << target << " please complete the challenge " << challenge[rand() % 5] << std::endl;
}
