#include "main.hpp"

int main(void)
{
	Phonebook	phonebook;
	std::string	cmd;

	while (1)
	{
		std::cout << "# Please enter command (ADD, SEARCH or EXIT)" << std::endl;
		std::cout << "# > ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			phonebook.add_contact();
		}
		if (cmd == "SEARCH")
		{
			phonebook.display_phonebook();
			phonebook.choose_contact();
		}
		if (cmd == "EXIT")
		{
			std::cout << "# Phonebook is closing.\n";
			break;
		}
	}
	return (0);
}
