#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string const	&getType() const;
	void			setType(std::string const type);

	private:
	std::string	m_type;
};

#endif
