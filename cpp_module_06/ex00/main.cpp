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

/*
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
*/
