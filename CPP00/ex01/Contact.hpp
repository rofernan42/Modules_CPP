#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

class Contact
{
	public:
	Contact();
	~Contact();
	void	fill_info(int index);
	void	display_pb_contact();
	void	display_contact_info(int index);

	private:
	std::string	m_contact_info[11];
	std::string	m_contact_fields[11];
	int		m_index;
};

#endif
