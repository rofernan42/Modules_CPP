#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

class Span
{
	public:
	Span();
	Span(unsigned int N);
	Span(const Span &copy);
	~Span();

	Span		&operator=(const Span &b);

	void		addNumber(int nb);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	void		display() const;

	class FullSpan: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Span is full");
		};
	};

	class NoSpan: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("No span to find");
		};
	};

	private:
	unsigned int		_n;
	std::vector<int>	_span;
};

#endif
