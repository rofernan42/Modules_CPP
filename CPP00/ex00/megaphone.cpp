#include <iostream>
#include <string>
#include <locale>

void	ft_strup(std::string& str)
{
	for (size_t i = 0; i < str.size(); i++)
		str[i] = std::toupper(str[i]);
}

int	main(int ac, char *av[])
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			ft_strup(str);
			std::cout << str;
		}
	}
	std::cout << std::endl;
	return (0);
}
