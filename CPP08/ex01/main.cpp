#include "span.hpp"

int	main(void)
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.display();

	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;

	sp.display();

	Span sp2 = Span(5);

	try
	{
		sp2.addNumber(9);
		sp2.addNumber(11);
		sp2.addNumber(5);
		sp2.addNumber(17);
		sp2.addNumber(3);
		sp2.display();
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		sp2.addNumber(7);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Span sp3 = Span(2);
	try
	{
		sp3.addNumber(2147483647);
		sp3.addNumber(-2147483648);
		sp3.display();
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
		sp3.display();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Span sp4 = Span(5);
	sp4.display();
	try
	{
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Span sp5 = Span(5);
	try
	{
		sp5.addNumber(-9);
		sp5.addNumber(11);
		sp5.addNumber(5);
		sp5.addNumber(-17);
		sp5.addNumber(-3);
		sp5.display();
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
