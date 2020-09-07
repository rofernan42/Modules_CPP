#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
	public:
	Array();
	Array(unsigned int n);
	Array(const Array<T> &copy);
	~Array();

	Array	&operator=(const Array<T> &b);
	T	&operator[](unsigned int index);

	class	OutException: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Array out of bound");
		};
	};

	unsigned int	size() const;

	private:
	unsigned int	_size;
	T		*_arr;
};

// Methods

template <typename T>
Array<T>::Array(): _size(0), _arr(NULL)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	if (n > 0)
		_arr = new T[_size]();
	else
		_arr = NULL;
}

template <typename T>
Array<T>::Array(const Array<T> &copy)
{
	_size = copy._size;
	if (_size > 0)
	{
		_arr = new T[_size]();
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = copy._arr[i];
	}
	else
		_arr = NULL;
}

template <typename T>
Array<T>::~Array()
{
	if (_arr)
		delete[] _arr;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &b)
{
	if (this != &b)
	{
		if (_arr)
			delete[] _arr;
		_size = b._size;
		if (_size > 0)
		{
			_arr = new T[_size]();
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = b._arr[i];
		}
	}
	return (*this);
}

template <typename T>
T		&Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw Array::OutException();
	else
		return (_arr[index]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

#endif
