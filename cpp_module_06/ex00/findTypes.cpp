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
	for (size_t i = 0; i < input.length(); i++)
		if (input[i] < 48 || input[i] > 57)
			return false;
	return true;
}

bool ScalarConverter::isFloat(const std::string &input)
{
	size_t len = input.length();
	std::cout << "len in isFloat: " << len << std::endl;
	if (input[len - 1] != 'f' && input[len - 1] != 'F')
		return false;
	for (size_t i = 0; i < len - 1; i++)
		if ((input[i] < 48 || input[i] > 57) && input[i] != 46)
			return false;
	return true;
}

bool ScalarConverter::isDouble(const std::string &input)
{
	size_t len = input.length();
	std::cout << "len in isDouble: " << len << std::endl;

	for (size_t i = 0; i < len - 1; i++)
		if ((input[i] < 48 || input[i] > 57) && input[i] != 46)
			return false;
	return true;
}
