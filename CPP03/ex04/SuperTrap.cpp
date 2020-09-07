#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << m_name << ": 'I'm SuperTrap!'" << std::endl;
	this->m_hp = FragTrap::m_hp;
	this->m_max_hp = FragTrap::m_max_hp;
	this->m_energy = NinjaTrap::m_energy;
	this->m_max_energy = NinjaTrap::m_max_energy;
	this->m_level = 1;
	this->m_melee_dam = NinjaTrap::m_melee_dam;
	this->m_range_dam = FragTrap::m_range_dam;
	this->m_armor_red = FragTrap::m_armor_red;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap is not so Super!" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &b)
{
	ClapTrap::operator=(b);
	return (*this);
}

void	SuperTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	std::cout << m_name << " takes " << amount << " damage)" << std::endl;
	std::cout << "-" << m_armor_red << " damage reduction" << std::endl;
	std::cout << "-" << amount - m_armor_red << " HP " << "(HP is now " << m_hp << ")" << std::endl;

}

void	SuperTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	std::cout << m_name << " gains HP!" << std::endl;
	std::cout << "+" << amount << " HP " << "(HP is now " << m_hp << ")" << std::endl;
}
