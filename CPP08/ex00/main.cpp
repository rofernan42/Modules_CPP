#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> a;
	std::deque<int> b;

	a.push_back(4);
	a.push_back(9);
	a.push_back(-42);
	a.push_back(2);
	a.push_back(123);

	b.push_back(123);
	b.push_back(456);
	b.push_front(789);
	b.push_front(456);

	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << "a[" << i << "]: " << a[i] << std::endl;
	std::cout << std::endl;
	try
	{
		easyfind(a, 9);
		easyfind(a, 2);
		easyfind(a, 123);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		easyfind(a, 43);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << "b[" << i << "]: " << b[i] << std::endl;
	std::cout << std::endl;
	try
	{
		easyfind(b, 456);
		easyfind(b, 123);
		easyfind(b, 123456);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
