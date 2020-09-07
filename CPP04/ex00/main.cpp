#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int	main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	
	std::cout << std::endl;

	Victim		jim2(jim);
	Peon		joe2(joe);
	Sorcerer	robert2(robert);

	std::cout << jim2 << joe2 << robert2 << std::endl;

	Victim		jim3("Jane");

	jim3 = jim2;
	std::cout << jim3;

	return (0);
}
