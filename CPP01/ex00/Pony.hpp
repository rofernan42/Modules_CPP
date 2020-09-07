#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	public:
	Pony(std::string name);
	~Pony();
	void	loose_energy();
	void	gain_energy();
	void	sleep();
	
	private:
	std::string	m_name;
	int		m_energy;
};

#endif
