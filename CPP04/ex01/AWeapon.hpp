#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &copy);
	virtual ~AWeapon();

	AWeapon		&operator=(const AWeapon&);
	std::string	getName() const; // std::string [...] getName() const;
	int		getAPCost() const;
	int		getDamage() const;
	virtual void	attack() const = 0;

	protected:
	std::string	m_name;
	int		m_apcost;
	int		m_damage;
};

#endif
