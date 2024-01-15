#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Usage: ./RPN \"inverted Polish mathematical expression\"" << std::endl;
	try
	{
		printRpn(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
