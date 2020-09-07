#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	myOwnTeam(void)
{
	std::string	type;
	std::string	name;
	Zombie		myteam[6];

	std::cout << "> Create your zombie type : ";
	std::cin >> type;
	std::cout << "> Choose the name of your leader : ";
	std::cin >> name;
	myteam[0].createZombie(name, type);
	std::cout << ">> Creation of your team..." << std::endl;
	for (int i = 1; i < 6; i++)
		myteam[i].createZombie(myteam[i].randomName(), type);
	std::cout << "\n>> Unfortunately an explosion destroyed your GHQ and your team :( ...\n\n";
}

void	enemyTeam(std::string type, ZombieEvent zombie, Zombie *typezombie[6])
{
	std::string name;

	std::cout << ">> Creating " << type << " type..." << std::endl;
	zombie.setZombieType(type);
	std::cout << "> Choose name of " << type << " leader : ";
	std::cin >> name;
	typezombie[0] = zombie.newZombie(name);
	std::cout << ">> Creation of " << type << " team..." << std::endl;
	for (int i = 1; i < 6; i++)
		typezombie[i] = zombie.randomChump();
}

int	main(void)
{
	ZombieEvent	walker;
	ZombieEvent	voodoo;
	ZombieEvent	ghoul;
	Zombie		*walkerzombie[6];
	Zombie		*voodoozombie[6];
	Zombie		*ghoulzombie[6];

	srand(time(NULL));
	enemyTeam("Walkers", walker, walkerzombie);
	std::cout << std::endl;
	enemyTeam("Voodoos", voodoo, voodoozombie);
	std::cout << std::endl;
	enemyTeam("Ghouls", ghoul, ghoulzombie);
	std::cout << std::endl;
	myOwnTeam();
	std::cout << std::endl;
	std::cout << ">> Other teams are fighting but no one wins..." << std::endl;
	std::cout << "\n>> Destruction of zombies...\n\n";
	for (int i = 0; i < 6; i++)
	{
		delete walkerzombie[i];
		delete voodoozombie[i];
		delete ghoulzombie[i];
	}
	return (0);
}
