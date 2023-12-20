#include "ScalarConverter.hpp"

void ScalarConverter::printChar()
{
	if (_char >= 32 && _char <= 126)
		std::cout << "char: " << _char << std::endl;
	else if (_impossibleC == true)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::printInt()
{
	if (_impossibleI == true)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _int << std::endl;
}

void ScalarConverter::printFloat()
{
	if (_impossibleF == true)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(2) << _float << "f" << std::endl;
}

void ScalarConverter::printDouble()
{
	if (_impossibleD == true)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(2) << _double << std::endl;
}

