#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat jim("Jim", 3);

	Form a("A", 2, 2);

	std::cout << jim;
	std::cout << a;
	
	try
	{
		jim.signForm(a);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	jim.increase();
	std::cout << jim;
	jim.signForm(a);
	jim.signForm(a);

	try
	{
		Form c("C", 0, 50);
		std::cout << c;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form c("C", 151, 50);
		std::cout << c;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form c("C", 50, 0);
		std::cout << c;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form c("C", 50, 151);
		std::cout << c;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form c("C", 50, 50);
		std::cout << c;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
