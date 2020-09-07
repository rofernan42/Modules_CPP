#include "span.hpp"

Span::Span(): _n(0)
{
}

Span::Span(unsigned int N): _n(N)
{
}

Span::Span(const Span &copy): _n(copy._n), _span(copy._span)
{
}

Span::~Span()
{
}

Span		&Span::operator=(const Span &b)
{
	if (this != &b)
	{
		_n = b._n;
		_span = b._span;
	}
	return (*this);
}

void		Span::addNumber(int nb)
{
	if (_span.size() < _n)
		_span.push_back(nb);
	else
		throw Span::FullSpan();
}

unsigned int	Span::shortestSpan()
{
	if (_span.size() <= 1)
		throw Span::NoSpan();
	std::vector<int> tmp = _span;
	unsigned int sp;

	std::sort(tmp.begin(), tmp.end());
	sp = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size() - 1; i++)
	{
		if (sp > static_cast<unsigned int>(tmp[i + 1] - tmp[i]))
			sp = tmp[i + 1] - tmp[i];
	}
	return (sp);
}

unsigned int	Span::longestSpan()
{
	if (_span.size() <= 1)
		throw Span::NoSpan();
	std::vector<int> tmp = _span;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

void		Span::display() const
{
	for (std::vector<int>::const_iterator it = _span.begin(); it != _span.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}
