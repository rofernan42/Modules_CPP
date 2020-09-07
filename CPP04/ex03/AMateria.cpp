#include "AMateria.hpp"

AMateria::AMateria(std::string const &type):
	_xp(0), _type(type)
{
}

AMateria::AMateria(const AMateria &copy):
	_xp(copy._xp), _type(copy._type)
{
}

AMateria::~AMateria()
{
}

AMateria		&AMateria::operator=(const AMateria &b)
{
	this->_xp = b._xp;
	this->_type = b._type;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (_type);
}

unsigned int		AMateria::getXP() const
{
	return (_xp);
}

void			AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}
