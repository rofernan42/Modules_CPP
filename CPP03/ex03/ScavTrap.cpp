#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << m_name << ": 'Let's get this party started!'" << std::endl;
	m_melee_dam = 20;
	m_range_dam = 15;
	m_armor_red = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "I'm too pretty to die!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &b)
{
	ClapTrap::operator=(b);
	return (*this);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	std::cout << m_name << ": 'Shwing!' (takes " << amount << " damage)" << std::endl;
	std::cout << "-" << m_armor_red << " damage reduction" << std::endl;
	std::cout << "-" << amount - m_armor_red << " HP " << "(HP is now " << m_hp << ")" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
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
