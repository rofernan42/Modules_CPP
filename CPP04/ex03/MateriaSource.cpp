#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
	_nbmat(0)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy):
	_nbmat(copy._nbmat)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._materia[i])
			this->_materia[i] = copy._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &b)
{
	this->_nbmat = b._nbmat;
	for (int i = 0; i < 4; i++)
	{
		if (b._materia[i])
			this->_materia[i] = b._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	if (_nbmat < 4 && m)
	{
		for (int i = 0; i < _nbmat; i++)
		{
			if (_materia[i] == m)
				return ;
		}
		_materia[_nbmat] = m;
		_nbmat++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] && _materia[i]->getType() == type)
		{
			AMateria *ret = _materia[i]->clone();
			return (ret);
		}
	}
	return (NULL);
}

//test fct
void	MateriaSource::display() const
{
	std::cout << "*************" << std::endl;
	std::cout << "nb mat: " << _nbmat << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			std::cout << "source[" << i << "]: " << _materia[i]->getType() << std::endl;
		else
			std::cout << "source[" << i << "]: null" << std::endl;
	}
	std::cout << "*************" << std::endl;
}
