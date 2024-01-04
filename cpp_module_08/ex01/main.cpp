#include "Span.hpp"

/*
int main(void)
{
	try
	{
		// add single number at a time
		srand(time(NULL));
		unsigned int spanSize = 5;
		Span span(spanSize);
		span.addNumber(rand() % 100);
		span.addNumber(rand() % 100);
		span.addNumber(rand() % 100);
		span.addNumber(rand() % 100);
		span.addNumber(rand() % 100);
		span.printMyVec();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		// add single number at atime
		srand(time(NULL));
		unsigned int spanSize = 3; 
		Span span(spanSize);
		span.addNumber(rand() % 100);
		span.addNumber(rand() % 100);
		span.addNumber(rand() % 100);
		span.addNumber(rand() % 100);
		span.addNumber(rand() % 100);
		span.printMyVec();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		//add multiple numbers from vector
		unsigned int spanSize = 10;
		Span span(spanSize);
		std::vector<int> vec = {1, 2, 3, 4, 5};
		span.addNumbers(vec.begin(), vec.end());
		span.printMyVec();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		//add multiple numbers from list
		unsigned int spanSize = 8;
		Span span(spanSize);
		std::list<int> list = {11, 22, 33, 44, 55};
		span.addNumbers(list.begin(), list.end());
		span.printMyVec();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		//add multiple numbers from list
		unsigned int spanSize = 2;
		Span span(spanSize);
		std::list<int> list = {11, 22, 33, 44, 55};
		span.addNumbers(list.begin(), list.end());
		span.printMyVec();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}
*/

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << "shortest: " << sp.shortestSpan() << std::endl;
std::cout << "longest: " << sp.longestSpan() << std::endl;
return 0;
}