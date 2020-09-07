#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	public:
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &copy);
	virtual ~Enemy();
	
	Enemy	&operator=(const Enemy&);

	std::string	getType() const;
	int		getHP() const;

	virtual void	takeDamage(int amount);

	protected:
	int		m_hp;
	std::string	m_type;
};

#endif
