#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm	&operator=(const RobotomyRequestForm&);

	virtual void	execute(Bureaucrat const &executor) const;

	private:
	std::string const	_target;
};

#endif
