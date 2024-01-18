#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	// check amount of input
	if (ac < 2)
	{
		std::cerr << "Usage: ./PmergeMe [ positive integer sequence ]" << std::endl;
		return 0;
	}
	try
	{
		sortAndPrint(++av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
// add time calculations
