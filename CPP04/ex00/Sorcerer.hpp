#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	public:
	Sorcerer(std::string const name, std::string const title);
	Sorcerer(const Sorcerer &copy);
	~Sorcerer();

	Sorcerer	&operator=(const Sorcerer&);

	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void		polymorph(const Victim&) const;

	private:
	std::string	m_name;
	std::string	m_title;
};

std::ostream	&operator<<(std::ostream &output, const Sorcerer &sorcerer);

#endif
