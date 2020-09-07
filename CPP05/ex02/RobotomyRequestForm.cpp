#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("Robotomy Request", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):
	Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec())
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &b)
{
	if (this != &b)
		Form::operator=(b);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand(time(NULL));
	Form::execute(executor);
	std::cout << "* prrrrr ... *" << std::endl;
	if (rand() % 3 == 2) 
		std::cout << _target << " has been robotomized." << std::endl;
	else
		std::cout << "Robotomization on " << _target << " failed." << std::endl;
}
