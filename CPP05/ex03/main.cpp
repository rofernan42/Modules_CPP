#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	Form	*scf, *rrf, *ppf, *test;
	Bureaucrat jim("Jim", 1);

	try
	{
		scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *scf;
		jim.signForm(*scf);
		std::cout << *scf;
		jim.executeForm(*scf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		test = someRandomIntern.makeForm("Test", "lalala");
		std::cout << *test;
		jim.signForm(*test);
		std::cout << *test;
		jim.executeForm(*test);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Blabla");
		std::cout << *rrf;
		jim.signForm(*rrf);
		jim.executeForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		ppf = someRandomIntern.makeForm("presidential pardon", "Haha");
		std::cout << *ppf;
		jim.signForm(*ppf);
		jim.executeForm(*ppf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete scf;
	delete rrf;
	delete ppf;

	return (0);
}
