#include "Character.hpp"

Character::Character(std::string const &name):
	_name(name), _nbmat(0)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character(const Character &copy):
	_name(copy._name), _nbmat(copy._nbmat)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._materia[i])
			this->_materia[i] = copy._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
}

Character		&Character::operator=(const Character &b)
{
	if (this != &b)
	{
		this->_name = b._name;
		this->_nbmat = b._nbmat;
		for (int i = 0; i < 4; i++)
		{
			if (b._materia[i])
				this->_materia[i] = b._materia[i]->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (_name);
}

void			Character::equip(AMateria *m)
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

void			Character::unequip(int idx)
{
	if (idx >= 0 && idx < _nbmat && _materia[idx])
	{
		for (int i = idx; i < 3; i++)
		{
			_materia[i] = _materia[i + 1];
			_materia[i + 1] = NULL;
		}
		_nbmat--;
	}
}

void			Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < _nbmat && _materia[idx])
		_materia[idx]->use(target);
}

//test fct
void	Character::display() const
{
	std::cout << "--------------" << std::endl;
	std::cout << "equipped: " << _nbmat << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			std::cout << "materia[" << i << "]: " << _materia[i]->getType() << " - " << _materia[i]->getXP() << " XP" << std::endl;
		else
			std::cout << "materia[" << i << "]: null" << std::endl;
	}
	std::cout << "--------------" << std::endl;
}
