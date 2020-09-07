#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	public:
	AMateria(std::string const &type);
	AMateria(const AMateria &copy);
	virtual ~AMateria();

	AMateria		&operator=(const AMateria&);

	std::string const	&getType() const;
	unsigned int		getXP() const;

	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);

	protected:
	unsigned int	_xp;
	std::string	_type;
};

#endif
