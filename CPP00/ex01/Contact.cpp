#include "main.hpp"

Contact::Contact()
{
	for (int i = 0; i < 8; i++)
		m_contact_info[i] = std::string();
	m_contact_fields[0] = "First name";
	m_contact_fields[1] = "Last name";
	m_contact_fields[2] = "Nickname";
	m_contact_fields[3] = "Login";
	m_contact_fields[4] = "Postal address";
	m_contact_fields[5] = "Email address";
	m_contact_fields[6] = "Phone number";
	m_contact_fields[7] = "Birthday date";
	m_contact_fields[8] = "Favorite meal";
	m_contact_fields[9] = "Underwear color";
	m_contact_fields[10] = "Darkest secret";
}

Contact::~Contact()
{
}

void	Contact::fill_info(int index)
{
	m_index = index;
	std::cout << "# >> Please add information." << std::endl;
	for (int i = 0; i < 11; i++)
	{
		while (m_contact_info[i].size() == 0)
		{
			std::cout << "#\t> " << m_contact_fields[i] << " : ";
			std::getline(std::cin, m_contact_info[i]);
			if (m_contact_info[i].size() == 0)
				std::cout << "#\tYou must fill the information." << std::endl;
		}
	}
	std::cout << "# >> Contact added !\n\n";
}

void	Contact::display_contact_info(int index)
{
	std::cout << "#\t>> Information for contact " << index << " :" << std::endl;
	for (int i = 0; i < 11; i++)
		std::cout << "#\t\t>> " << m_contact_fields[i] << " : " << m_contact_info[i] << std::endl;
	std::cout << std::endl;
}

void	Contact::display_pb_contact()
{
	std::cout << "\t|" << std::setw(10) << m_index;
	for (int i = 0; i < 3; i++)
	{
		if (m_contact_info[i].size() < 10)
			std::cout << "|" << std::setw(10) << m_contact_info[i];
		else
			std::cout << "|" << m_contact_info[i].substr(0, 9) << ".";
	}
	std::cout << "|" << std::endl;
}
