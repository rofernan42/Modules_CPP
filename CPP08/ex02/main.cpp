#include "mutantstack.hpp"

int	main(void)
{
	std::cout << "MUTANTSTACK :" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "popping last element..." << std::endl;
	mstack.pop();
	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "pushing new elements..." << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "now displaying the stack..." << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\nLIST :" << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "top: " << mlist.back() << std::endl;
	std::cout << "size: " << mlist.size() << std::endl;
	std::cout << "popping last element..." << std::endl;
	mlist.pop_back();
	std::cout << "top: " << mlist.back() << std::endl;
	std::cout << "size: " << mlist.size() << std::endl;
	std::cout << "pushing new elements..." << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::cout << "top: " << mlist.back() << std::endl;
	std::cout << "size: " << mlist.size() << std::endl;
	std::cout << "now displaying the list..." << std::endl;
	std::list<int>::iterator it2 = mlist.begin();
	std::list<int>::iterator ite2 = mlist.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	std::cout << "\nMUTANTSTACK 2 :" << std::endl;
	MutantStack<int> mstack2;
	mstack2.push(456);
	mstack2.push(798);
	mstack2.push(2);
	MutantStack<int>::iterator it3 = mstack2.begin();
	MutantStack<int>::iterator ite3 = mstack2.end();
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	std::cout << std::endl;
	mstack2 = mstack;
	it3 = mstack2.begin();
	ite3 = mstack2.end();
	++it3;
	--it3;
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}

	return (0);
}
