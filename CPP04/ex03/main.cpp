#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	src->display();

	ICharacter	*moi = new Character("moi");

	moi->display();

	AMateria	*tmp;
	AMateria	*tmp2;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp2 = src->createMateria("cure");
	moi->equip(tmp2);

	moi->equip(tmp2);
	AMateria	*tmp3;
	tmp3 = src->createMateria("ice");
	moi->equip(tmp3);

	AMateria	*tmp4;
	tmp4 = src->createMateria("test");
	moi->equip(tmp4);


	moi->display();

	ICharacter	*bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);
	moi->use(2, *bob);
	moi->use(3, *bob);

	std::cout << "---" << std::endl;
	moi->use(0, *bob);
	moi->display();
	moi->unequip(0);
	moi->display();
	moi->use(0, *bob);

	moi->unequip(0);
	moi->display();
	moi->use(0, *bob);


	std::cout << "---" << std::endl;

	std::cout << "test1: ";
	moi->use(4, *bob);
	std::cout << std::endl;
	std::cout << "test2: ";
	moi->use(-1, *bob);
	std::cout << std::endl;
	
	delete bob;
	delete moi;
	delete src;
	delete tmp;
	delete tmp2;

	return (0);
}
