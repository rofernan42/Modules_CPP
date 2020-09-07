#include "Pony.hpp"

void	ponyOnTheStack()
{
	std::string cmd;
	Pony ponystack("PonyStack");

	while (1)
	{
		std::cout << ">> What should the pony do ?" << std::endl
			<< ">> 1 -> gallop" << std::endl
			<< ">> 2 -> eat" << std::endl
			<< ">> 3 -> sleep" << std::endl
			<< ">> 0 -> quit" << std::endl
			<< "> ";
		std::cin >> cmd;
		std::cout << std::endl;
		if (cmd == "1")
			ponystack.loose_energy();
		else if (cmd == "2")
			ponystack.gain_energy();
		else if (cmd == "3")
			ponystack.sleep();
		else if (cmd == "0")
			break ;
	}
}

void	ponyOnTheHeap()
{
	std::string cmd;
	Pony *ponyheap(0);

	ponyheap = new Pony("PonyHeap");
	while (1)
	{
		std::cout << ">> What should the pony do ?" << std::endl
			<< ">> 1 -> gallop" << std::endl
			<< ">> 2 -> eat" << std::endl
			<< ">> 3 -> sleep" << std::endl
			<< ">> 0 -> quit" << std::endl
			<< "> ";
		std::cin >> cmd;
		std::cout << std::endl;
		if (cmd == "1")
			ponyheap->loose_energy();
		else if (cmd == "2")
			ponyheap->gain_energy();
		else if (cmd == "3")
			ponyheap->sleep();
		else if (cmd == "0")
			break ;
	}
	delete ponyheap;
	ponyheap = 0;
}

int	main(void)
{
	std::string cmd;

	while (1)
	{
		std::cout << ">> Make a choice :" << std::endl
			<< ">> 1 -> Pony on the Stack" << std::endl
			<< ">> 2 -> Pony on the Heap" << std::endl
			<< ">> 0 -> quit" << std::endl
			<< "> ";
		std::cin >> cmd;
		std::cout << std::endl;
		if (cmd == "1")
			ponyOnTheStack();
		else if (cmd == "2")
			ponyOnTheHeap();
		else if (cmd == "0")
		{
			std::cout << "> End of program." << std::endl;
			break ;
		}
	}
	return (0);
}
