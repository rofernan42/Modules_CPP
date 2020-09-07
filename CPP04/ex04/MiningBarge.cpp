#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	_nbminer = 0;
	for (int i = 0; i < 4; i++)
		_miner[i] = NULL;
}

MiningBarge::MiningBarge(const MiningBarge &copy)
{
	_nbminer = copy._nbminer;
	for (int i = 0; i < 4; i++)
		this->_miner[i] = copy._miner[i];
}

MiningBarge::~MiningBarge()
{
}

MiningBarge	&MiningBarge::operator=(const MiningBarge &b)
{
	_nbminer = b._nbminer;
	for (int i = 0; i < 4; i++)
	{
		if (b._miner[i])
			this->_miner[i] = b._miner[i];
		else
			this->_miner[i] = NULL;
	}
	return (*this);
}

void	MiningBarge::equip(IMiningLaser *miner)
{
	if (_nbminer < 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_miner[i] == miner)
				return ;
		}
		_miner[_nbminer] = miner;
		_nbminer++;
	}
}

void	MiningBarge::mine(IAsteroid *asteroid) const
{
	for (int i = 0; i < _nbminer; i++)
		_miner[i]->mine(asteroid);
}

//test fct
void	MiningBarge::display() const
{
	std::cout << "----------" << std::endl;
	std::cout << "nbmner: " << _nbminer << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_miner[i])
			std::cout << "miner(" << i << "): " << _miner[i]->getName() << std::endl;
		else
			std::cout << "miner(" << i << "): null" << std::endl;
	}
	std::cout << "----------" << std::endl;
}
