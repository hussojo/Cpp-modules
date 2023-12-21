#include "ScalarConverter.hpp"

const std::string ScalarConverter::findInputType(const std::string &input)
{
	if (input.length() == 0)
		return ("char");
	else if (input.length() == 1 && (input[0] < 48 || input[0] > 57))
		return ("char");
	else if (isInt(input) == true)
		return ("int");
	else if (isFloat(input) == true)
		return ("float");
	else if (isDouble(input) == true)
		return ("double");
	else
		throw std::runtime_error("faulty input");
}

bool ScalarConverter::isInt(const std::string &input)
{
	size_t i = 0;
	if (input[i] == '+' || input [i] == '-')
		i++;
	for (; i < input.length(); i++)
		if (input[i] < 48 || input[i] > 57)
			return false;
	return true;
}

bool ScalarConverter::isFloat(const std::string &input)
{
	size_t len = input.length();
	size_t i = 0;
	if (input[i] == '+' || input [i] == '-')
	{
		if (input == "+inff")

		i++;
	}
	if (input[len - 1] != 'f' && input[len - 1] != 'F')
		return false;
	for (; i < len - 1; i++)
	{
		if (input[i] == 46)
			_isDot += 1;
		if ((input[i] < 48 || input[i] > 57) && input[i] != 46)
			return false;
	}
	if (_isDot > 1)
		return false;
	return true;
}

bool ScalarConverter::isDouble(const std::string &input)
{
	size_t len = input.length();
	size_t i = 0;
	if (input[i] == '+' || input [i] == '-')
		i++;
	for (; i < len; i++)
	{
		if (input[i] == 46)
			_isDot += 1;
		if ((input[i] < 48 || input[i] > 57) && input[i] != 46)
			return false;
	}
	if (_isDot > 1)
		return false;
	return true;
}

bool ScalarConverter::isPseudo(const std::string &input)
{
	if (input == "-inf" || input == "-inff")
	{
		_impossibleC = true;
		_impossibleI = true;
		_float = -std::numeric_limits<float>::infinity();
		std::cout << "converted float: "<< _float << std::endl;
		_double = -std::numeric_limits<double>::infinity();
		return true;
	}
	else if (input == "+inf" || input == "+inff")
	{
		_impossibleC = true;
		_impossibleI = true;
		_float = std::numeric_limits<float>::infinity();
		_double = std::numeric_limits<double>::infinity();
		return true;
	}
	else if (input == "nan" || input == "nanf")
	{
		_impossibleC = true;
		_impossibleI = true;
		_float = std::numeric_limits<float>::quiet_NaN();
		_double = std::numeric_limits<double>::quiet_NaN();
		return true;
	}
	return false;
}
