#include "identify.hpp"

void	identify_from_pointer(Base *p)
{
	Base *a = dynamic_cast<Aclass*>(p);
	Base *b = dynamic_cast<Bclass*>(p);
	Base *c = dynamic_cast<Cclass*>(p);

	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	Base *a = dynamic_cast<Aclass*>(&p);
	Base *b = dynamic_cast<Bclass*>(&p);
	Base *c = dynamic_cast<Cclass*>(&p);

	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;

}
