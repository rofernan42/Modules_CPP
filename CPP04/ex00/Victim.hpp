#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:
	Victim(std::string const name);
	Victim(const Victim &copy);
	virtual ~Victim();

	Victim		&operator=(const Victim&);

	std::string	getName(void) const;
	virtual void	getPolymorphed(void) const;

	private:
	std::string	m_name;
};

std::ostream	&operator<<(std::ostream &output, const Victim &victim);

#endif
