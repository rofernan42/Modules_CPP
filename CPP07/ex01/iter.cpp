#include <iostream>
#include <string>
	
template <typename T>
void	iter(T array[], int size, void (*fct)(const T &val))
{
	for (int i = 0; i < size; i++)
		(*fct)(array[i]);
}

template <typename T>
void	display(const T &val)
{
	std::cout << val << std::endl;
}

int	main(void)
{
	int arr1[5] = {1, 2, 3, 4, 5};
	iter(arr1, 3, display);
	std::cout << std::endl;
	iter(arr1, 5, display);
	std::cout << std::endl;

	std::string arr2[4] = {"Hello", " ", "World", "!"};
	iter(arr2, 4, display);
	std::cout << std::endl;

	float arr3[5] = {0.5f, 8.6f, 189.78f, 45.4656f, 798.105f};
	iter(arr3, 5, display);
	std::cout << std::endl;

	return (0);
}
