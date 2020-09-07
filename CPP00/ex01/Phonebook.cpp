#include "main.hpp"

Phonebook::Phonebook()
{
	m_nb_contacts = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::add_contact()
{
	if (m_nb_contacts >= 8)
		std::cout << "# >> Phonebook full (max 8 contacts).\n\n";
	else
	{
		m_contacts[m_nb_contacts].fill_info(m_nb_contacts + 1);
		m_nb_contacts++;
	}
}

void	Phonebook::display_phonebook()
{
	if (m_nb_contacts == 0)
		std::cout << "# >> Phonebook is empty !\n\n";
	else
	{
		std::cout << "\t_____________________________________________" << std::endl;
		std::cout << "\t|     Index|First name| Last name|  Nickname|" << std::endl;
		std::cout << "\t|__________|__________|__________|__________|" << std::endl;
		for (int i = 0; i < m_nb_contacts; i++)
			m_contacts[i].display_pb_contact();	
		std::cout << "\t|__________|__________|__________|__________|\n\n";
	}
}

void	Phonebook::choose_contact()
{
	int index;

	if (m_nb_contacts > 0)
	{
		while (1)
		{
			std::cout << "#\t> Choose index for information (0 to exit) : ";
			std::cin >> index;
			if (std::cin.fail() || index > m_nb_contacts || index < 0)
			{
				std::cout << "#\t>> Wrong index value !" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue ;
			}
			else if (index == 0)
			{
				std::cout << std::endl;
				break ;
			}
			m_contacts[index - 1].display_contact_info(index);
		}
	}
}
