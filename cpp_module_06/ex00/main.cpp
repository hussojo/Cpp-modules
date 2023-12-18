#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
	try
	{
		if (ac != 2)
			throw std::runtime_error("Wrong amount of arguments! use: ./convert <argument>");
		else
			ScalarConverter::convert(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return 0;
}
