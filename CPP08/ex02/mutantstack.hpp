#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <iterator>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
	MutantStack();
	MutantStack(const MutantStack<T> &copy);
	virtual ~MutantStack();

	MutantStack	&operator=(const MutantStack<T> &b);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin();
	iterator	end();
};

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy): std::stack<T>(copy)
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &b)
{
	std::stack<T>::operator=(b);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (std::begin(std::stack<T>::c));
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (std::end(std::stack<T>::c));
}

#endif
