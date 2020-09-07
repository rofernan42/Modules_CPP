#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Error arguments (./replace file_name string_to_search string_to_replace)." << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::ifstream fileIn(filename);
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::string line;
	std::size_t loc;

	if (!fileIn.is_open() || !fileIn.good())
	{
		std::cerr << "Error opening file." << std::endl;
		return (1);
	}
	std::ofstream fileOut(filename + ".replace", std::ios::trunc);
	if (!fileOut.good())
	{
		std::cerr << "Error replacement file." << std::endl;
		return (1);
	}
	if (s1.length() > 0 && s2.length() > 0)
	{
		while (std::getline(fileIn, line))
		{
			loc = 0;
			while ((loc = line.find(s1, loc)) != std::string::npos)
			{
				line.erase(loc, s1.length());
				line.insert(loc, s2);
				loc = loc + s2.length();
			}
			fileOut << line << '\n';
		}
	}
	else
	{
		std::cerr << "Error empty string." << std::endl;
		return (1);
	}
	fileIn.close();
	fileOut.close();
	return (0);
}
