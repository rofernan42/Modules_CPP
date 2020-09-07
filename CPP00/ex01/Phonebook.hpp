#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

class Phonebook
{
	public:
	Phonebook();
	~Phonebook();
	void	add_contact();
	void	display_phonebook();
	void	choose_contact();

	private:
	Contact	m_contacts[8];
	int	m_nb_contacts;
};

#endif
