#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	Form("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):
	Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec())
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &b)
{
	if (this != &b)
		Form::operator=(b);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << _target << " has been forgiven by Zafod Beeblebrox." << std::endl;
}
