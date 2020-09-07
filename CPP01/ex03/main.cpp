#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main(void)
{
	int	n;

	srand(time(NULL));
	std::cout << "Select number of Walkers : ";
	std::cin >> n;
	ZombieHorde walkers(n, "Walker");
	walkers.announce();
	std::cout << std::endl;
	std::cout << "Select number of Voodoos : ";
	std::cin >> n;
	ZombieHorde voodoos(n, "Voodoo");
	voodoos.announce();
	std::cout << std::endl;
	std::cout << "Michonne just arrived and attacks the hords !\n\n";
	return (0);
}
