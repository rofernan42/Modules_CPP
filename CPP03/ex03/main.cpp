#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	FragTrap frag("FR4G");

	srand(time(NULL));
	frag.meleeAttack("Lilith");
	frag.rangedAttack("Roland");
	frag.takeDamage(46);
	frag.beRepaired(50);
	frag.takeDamage(42);
	frag.takeDamage(70);
	frag.beRepaired(10);
	frag.vaulthunter_dot_exe("Lilith");
	frag.vaulthunter_dot_exe("Brick");
	frag.vaulthunter_dot_exe("Brick");
	frag.vaulthunter_dot_exe("Lilith");
	frag.vaulthunter_dot_exe("Roland");
	
	std::cout << std::endl;
	FragTrap frag2("FR4GCPY");
	frag2 = frag;
	frag2.display();
	std::cout << std::endl;

	ScavTrap scav("SC4V");
	scav.meleeAttack("Lilith");
	scav.rangedAttack("Roland");
	scav.takeDamage(4);
	scav.beRepaired(5);
	scav.takeDamage(78);
	scav.takeDamage(8);
	scav.beRepaired(50);
	scav.challengeNewcomer("Lilith");
	scav.challengeNewcomer("Lilith");
	scav.challengeNewcomer("Lilith");
	scav.challengeNewcomer("Lilith");
	scav.challengeNewcomer("Lilith");

	std::cout << std::endl;

	NinjaTrap ninja("N1NJA");
	ninja.meleeAttack("Lilith");
	ninja.rangedAttack("Roland");
	ninja.takeDamage(4);
	ninja.beRepaired(5);
	ninja.takeDamage(78);
	ninja.takeDamage(8);
	ninja.beRepaired(50);
	ninja.ninjaShoebox(frag);
	ninja.display();
	ninja.ninjaShoebox(scav);
	ninja.display();
	ninja.ninjaShoebox(ninja);

	NinjaTrap ninja2("N2NJA");
	ninja.ninjaShoebox(ninja2);

	return (0);
}
