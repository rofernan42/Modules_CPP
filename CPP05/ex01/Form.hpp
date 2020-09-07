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
	~Form();

	Form			&operator=(const Form&);

	std::string const	getName() const;
	bool			getSigned() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void			beSigned(Bureaucrat &bureaucrat);

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

	private:
	std::string const	_name;
	bool			_signed;
	int const		_grade_sign;
	int const		_grade_exec;
};

std::ostream	&operator<<(std::ostream &output, const Form &form);

#endif
