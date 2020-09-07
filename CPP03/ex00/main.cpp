#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag("Mordecai");

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

	return (0);
}
