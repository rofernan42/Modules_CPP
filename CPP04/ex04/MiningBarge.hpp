#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
	public:
	MiningBarge();
	MiningBarge(const MiningBarge &copy);
	~MiningBarge();

	MiningBarge	&operator=(const MiningBarge&);

	void	equip(IMiningLaser *miner);
	void	mine(IAsteroid *asteroid) const;

	//test fct
	void	display() const;

	private:
	IMiningLaser	*_miner[4];
	int		_nbminer;
};

#endif
