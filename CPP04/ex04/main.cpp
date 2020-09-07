#include "Comet.hpp"
#include "Asteroid.hpp"
#include "MiningBarge.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

int	main(void)
{
	MiningBarge barge;

	IAsteroid *asteroid = new Asteroid();
	IAsteroid *comet = new Comet();

	IMiningLaser *deep1 = new DeepCoreMiner();
	IMiningLaser *strip1 = new StripMiner();
	IMiningLaser *deep2 = new DeepCoreMiner();
	IMiningLaser *strip2 = new StripMiner();
	IMiningLaser *deep3 = new DeepCoreMiner();

	barge.equip(deep1);
	barge.equip(strip1);
	barge.equip(deep1);
	barge.display();
	barge.equip(deep2);
	barge.display();

	barge.mine(asteroid);
	barge.mine(comet);

	barge.equip(strip2);
	barge.display();
	barge.equip(deep3);
	barge.equip(deep2);
	barge.equip(deep1);
	barge.display();

	barge.mine(comet);
	barge.mine(asteroid);

	delete asteroid;
	delete comet;
	delete deep1;
	delete deep2;
	delete deep3;
	delete strip1;
	delete strip2;

	return (0);
}
