#include "Span.hpp"


int main(void)
{
	std::cout << "----------------------------------" << std::endl;
	try
	{
		std::cout << "Add single number at a time" << std::endl;
		srand(time(NULL));
		unsigned int spanSize = 5;
		std::cout << "Span size: " << spanSize << std::endl;
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
	std::cout << "----------------------------------" << std::endl;
	try
	{
		std::cout << "Add single number at a time" << std::endl;
		srand(time(NULL));
		unsigned int spanSize = 3;
		std::cout << "Span size: " << spanSize << std::endl;
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
	std::cout << "----------------------------------" << std::endl;
	try
	{
		std::cout << "Add multiple numbers from vector" << std::endl;
		unsigned int spanSize = 10;
		std::cout << "Span size: " << spanSize << std::endl;
		Span span(spanSize);
		std::vector<int> vec;
		for (unsigned int i = 0; i < spanSize; i++)
			vec.push_back(rand() % 100);
		span.addNumbers(vec.begin(), vec.end());
		span.printMyVec();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------" << std::endl;
	try
	{
		std::cout << "Add multiple numbers from deque" << std::endl;
		unsigned int spanSize = 8;
		std::cout << "Span size: " << spanSize << std::endl;
		Span span(spanSize);
		std::deque<int> deq;
		for (unsigned int i = 0; i < spanSize; i++)
			deq.push_back(rand() % 100);
		span.addNumbers(deq.begin(), deq.end());
		span.printMyVec();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------" << std::endl;
	try
	{
		std::cout << "Add multiple numbers from list" << std::endl;
		unsigned int spanSize = 14;
		std::cout << "Span size: " << spanSize << std::endl;
		Span span(spanSize);
		std::list<int> list;
		for (unsigned int i = 0; i < spanSize; i++)
			list.push_back(rand() % 100);
		span.addNumbers(list.begin(), list.end());
		span.printMyVec();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << "shortest: " << sp.shortestSpan() << std::endl;
// std::cout << "longest: " << sp.longestSpan() << std::endl;
// return 0;
// }
