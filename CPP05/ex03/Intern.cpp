#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &b)
{
	(void)b;
	return (*this);
}

Form	*scf(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*rrf(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*ppf(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	Form *ret = NULL;
	_create_form[0] = {"shrubbery creation", &scf};
	_create_form[1] = {"robotomy request", &rrf};
	_create_form[2] = {"presidential pardon", &ppf};

	for (int i = 0; i < 3; i++)
	{
		if (name == _create_form[i]._name)
		{
			ret = _create_form[i]._fct(target);
			std::cout << "Intern creates " << ret->getName() << std::endl;
		}
	}
	if (!ret)
	{
		std::cout << "Can't create " << name << " form: ";
		throw Intern::UnknownForm();
	}
	return (ret);
}
