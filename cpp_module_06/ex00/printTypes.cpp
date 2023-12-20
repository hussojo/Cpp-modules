#include "ScalarConverter.hpp"

void ScalarConverter::printChar()
{
	if (_char >= 32 && _char <= 126)
		std::cout << "char: " << _char << std::endl;
	else if (_type == "float" || _type == "double")
		std::cout << "char: Non displayable" << std::endl;
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
		std::cout << "float: " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
}

void ScalarConverter::printDouble()
{
	if (_impossibleD == true)
		std::cout << "double: impossible" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << _double << std::endl;
}
