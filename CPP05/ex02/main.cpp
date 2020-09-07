#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat jim("Jim", 138);

	Form *a = new ShrubberyCreationForm("A");

	std::cout << jim;
	std::cout << *a;
	
	try
	{
		jim.signForm(*a);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(*a);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	jim.signForm(*a);
	jim.increase();
	std::cout << jim;
	try
	{
		jim.executeForm(*a);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat bob("Bob", 5);
	Form *b = new ShrubberyCreationForm("B");
	try
	{
		bob.executeForm(*b);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form *c = new RobotomyRequestForm("C");
	std::cout << *c;
	try
	{
		jim.signForm(*c);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(*c);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		bob.executeForm(*c);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.signForm(*c);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(*c);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form *d = new PresidentialPardonForm("D");
	std::cout << *d;
	try
	{
		bob.signForm(*d);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(*d);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}



	delete a;
	delete b;
	delete c;
	delete d;

	return (0);
}
