#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
	public:
	Human();
	~Human();
	const Brain	&getBrain();
	std::string	identify();

	private:
	const Brain	m_brain;
};

#endif
