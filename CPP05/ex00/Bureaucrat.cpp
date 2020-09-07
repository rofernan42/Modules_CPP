#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade):
	_name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):
	_name(copy._name), _grade(copy._grade)
{
	if (copy._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (copy._grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &b)
{
	if (this != &b)
	{
		this->_grade = b._grade;
	}
	return (*this);
}

void		Bureaucrat::increase()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void		Bureaucrat::decrease()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

std::string const	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

std::ostream		&operator<<(std::ostream &output, const Bureaucrat &bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (output);
}
