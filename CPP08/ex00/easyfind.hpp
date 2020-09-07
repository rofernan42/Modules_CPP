#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <iterator>
# include <vector>
# include <deque>

class NotFoundException: public std::exception
{
	public:
	virtual const char *what() const throw()
	{
		return ("Element not found");
	};
};

template <typename T>
void	easyfind(T &t, int n)
{
	typename T::iterator it;

	it = find(t.begin(), t.end(), n);
	if (it != t.end())
		std::cout << "Element " << n << " at position " << distance(t.begin(), it) << std::endl;
	else
		throw NotFoundException();
}

#endif
