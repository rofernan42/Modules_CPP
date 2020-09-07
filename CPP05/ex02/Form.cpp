#include "Form.hpp"

Form::Form(std::string const &name, int const grade_sign, int const grade_exec):
	_name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy):
	_name(copy._name), _signed(copy._signed), _grade_sign(copy._grade_sign), _grade_exec(copy._grade_exec)
{
	if (copy._grade_sign < 1 || copy._grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (copy._grade_sign > 150 || copy._grade_exec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form			&Form::operator=(const Form &b)
{
	if (this != &b)
		_signed = b._signed;
	return (*this);
}

std::string const	Form::getName() const
{
	return (_name);
}

bool			Form::getSigned() const
{
	return (_signed);
}

int			Form::getGradeSign() const
{
	return (_grade_sign);
}

int			Form::getGradeExec() const
{
	return (_grade_exec);
}

void			Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _grade_sign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

void			Form::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw Form::FormUnsignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
}

std::ostream		&operator<<(std::ostream &output, const Form &form)
{
	std::string sign;
	if (form.getSigned() == true)
		sign = "signed";
	else
		sign = "unsigned";
	output << "Form " << form.getName() << ", " << sign << " [grade required to sign: " << form.getGradeSign() << "] [grade required to execute: " << form.getGradeExec() << "]" << std::endl;
	return (output);
}
