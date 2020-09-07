#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void			advert();
	void			createZombie(std::string name, std::string type);
	static std::string	randomName();

	private:
	std::string	m_name;
	std::string	m_type;
};

#endif
