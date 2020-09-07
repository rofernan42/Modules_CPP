#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat jim("Jim", 3);
	Bureaucrat bob("Bob", 149);

	std::cout << jim;
	try
	{
		jim.increase();
		jim.increase();
		std::cout << jim;
		jim.increase();
		std::cout << jim;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << bob;
	try
	{
		bob.increase();
		std::cout << bob;
		bob.decrease();
		bob.decrease();
		std::cout << bob;
		bob.decrease();
		bob.decrease();
		std::cout << bob;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat tom("Tom", 1);
		Bureaucrat jan("Jan", 150);
		Bureaucrat pol("Pol", 50);
		std::cout << tom << jan << pol;
		Bureaucrat kal("Kal", 0);
		std::cout << kal;
		Bureaucrat lee("Lee", 151);
		std::cout << lee;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat kim("Kim", 151);
		std::cout << kim;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jim2(jim);
		std::cout << jim2;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	Bureaucrat pol("Pol", 50);
	try
	{
		Bureaucrat jon("Jon", 84);
		jon = pol;
		std::cout << jon;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
