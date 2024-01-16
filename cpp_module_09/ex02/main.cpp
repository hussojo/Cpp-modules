#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	// check amount of input
	if (ac < 2)
		std::cerr << "Usage: ./PmergeMe [ positive integer sequence ]" << std::endl;
	try
	{
		// call the function to init containers
		sortAndPrint(++av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
// make work with vector first
// -> add before and after outputs
// then make work with deque
// add time calculations
