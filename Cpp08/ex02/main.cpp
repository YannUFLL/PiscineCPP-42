#include <vector>
#include <stack>
#include <list>
#include <iostream>
#include "MutanStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); 
	mstack.push(20); 
	mstack.push(77); 
	mstack.push(10); 
	mstack.push(11); 
	mstack.push(12); 
	mstack.push(14); 
	mstack.push(15); 
	mstack.push(105); 
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
	std::cout << std::endl; 

	std::list<int> oneList;
	oneList.push_back(5);
	oneList.push_back(17);
	std::cout << oneList.back() << std::endl;
	oneList.pop_back();
	std::cout << oneList.size() << std::endl;
	oneList.push_back(3);
	oneList.push_back(5);
	oneList.push_back(737);//[...] oneList.pushback(0);
	oneList.push_back(20);
	oneList.push_back(77);
	oneList.push_back(10);
	oneList.push_back(11);
	oneList.push_back(12);
	oneList.push_back(14);
	oneList.push_back(15);
	oneList.push_back(105);
	std::list<int>::iterator it2 = oneList.begin();
	std::list<int>::iterator ite2 = oneList.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::list<int> s2(oneList); 
	return 0;
}
