#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Form.hpp"
class Form;

class Bureaucrat
{
	public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat();

	Bureaucrat		&operator=(const Bureaucrat&);

	void			increase();
	void			decrease();
	void			signForm(Form &form);

	std::string const	getName() const;
	int			getGrade() const;

	class GradeTooHighException: public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Grade too High");
		};
	};
	class GradeTooLowException: public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Grade too Low");
		};
	};

	private:
	std::string const	_name;
	int			_grade;
};

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &bureaucrat);

#endif
