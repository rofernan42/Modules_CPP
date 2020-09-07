#include "Pony.hpp"

Pony::Pony(std::string name) : m_name(name), m_energy(100)
{
	std::cout << "\tThe pony name is " << m_name << std::endl;
	std::cout << "\tHis energy is " << m_energy << "\n\n";
}
 
Pony::~Pony()
{
	std::cout << "\t" << m_name << " is going back to the stable...\n\n";
}

void	Pony::loose_energy()
{
	if (m_energy <= 0)
	{
		std::cout << "\tEnergy is " << m_energy << std::endl;
		std::cout << "\t" << m_name << " is too tired to gallop ! Eat or sleep to gain energy. \n\n";
	}
	else
	{
		std::cout << "\t" << m_name << " is galloping..." << std::endl;
		m_energy -= 25;
		if (m_energy < 0)
			m_energy = 0;
		std::cout << "\tEnergy is now " << m_energy << "\n\n";
	}
}

void	Pony::gain_energy()
{
	std::cout << "\t" << m_name << " is eating..." << std::endl;
	m_energy += 15;
	if (m_energy > 100)
		m_energy = 100;
	std::cout << "\tEnergy is now " << m_energy << "\n\n";
}

void	Pony::sleep()
{
	std::cout << "\t" << m_name << " is sleeping..." << std::endl;
	m_energy = 100;
	std::cout << "\t" << m_name << " is fully recovered ! Energy is " << m_energy << "\n\n";
}
