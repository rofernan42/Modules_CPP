#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	std::cout << m_name << ": 'It's time to bleed!'" << std::endl;
	m_hp = 60;
	m_max_hp = 60;
	m_energy = 120;
	m_max_energy = 120;
	m_melee_dam = 60;
	m_range_dam = 5;
	m_armor_red = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "WHY OH GOD WHY!" << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &b)
{
	ClapTrap::operator=(b);
	return (*this);
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	std::cout << m_name << ": 'That looks like it hurts!' (takes " << amount << " damage)" << std::endl;
	std::cout << "-" << m_armor_red << " damage reduction" << std::endl;
	std::cout << "-" << amount - m_armor_red << " HP " << "(HP is now " << m_hp << ")" << std::endl;

}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	std::cout << m_name << ": 'Healsies!'" << std::endl;
	std::cout << "+" << amount << " HP " << "(HP is now " << m_hp << ")" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout << m_name << " calls " << clap.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << m_name
		<<  " sucks " << 20 << " points of energy from " 
		<< frag.getName() << std::endl;
	m_energy = m_energy + 20;
	if (m_energy > m_max_energy)
		m_energy = m_max_energy;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	std::cout << m_name
		<< " sucks " << 20 << " HP from " 
		<< scav.getName() << std::endl;
	m_hp = m_hp + 20;
	if (m_hp > m_max_hp)
		m_hp = m_max_hp;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	if (this == &ninja)
		std::cout << m_name << ": can't attack myself !!" << std::endl;
	else
		std::cout << m_name << " melee attacks " << ninja.getName() 
		<< " and causes " << m_melee_dam << " points of damage!" << std::endl;
}
