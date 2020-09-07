#include "identify.hpp"

int	main(void)
{
	Base *p = new Aclass;
	identify_from_pointer(p);
	identify_from_reference(*p);

	p = new Bclass;
	identify_from_pointer(p);
	identify_from_reference(*p);

	p = new Cclass;
	identify_from_pointer(p);
	identify_from_reference(*p);

	delete p;

	return (0);
}
