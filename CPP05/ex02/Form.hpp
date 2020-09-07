#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	public:
	Form(std::string const &name, int const grade_sign, int const grade_exec);
	Form(const Form &copy);
	virtual ~Form();

	Form			&operator=(const Form&);

	std::string const	getName() const;
	bool			getSigned() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void			beSigned(Bureaucrat &bureaucrat);
	virtual void		execute(Bureaucrat const &executor) const;

	class GradeTooHighException: public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Grade too high");
		};
	};
	class GradeTooLowException: public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return("Grade too low");
		};
	};
	class FormUnsignedException: public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return("Form unsigned");
		};
	};

	private:
	std::string const	_name;
	bool			_signed;
	int const		_grade_sign;
	int const		_grade_exec;
};

std::ostream	&operator<<(std::ostream &output, const Form &form);

#endif
