#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &str)
{
	std::string input;
	input = findInputType(str);
	std::cout << "return: " << input << std::endl;
}

const std::string ScalarConverter::findInputType(const std::string &input)
{
	if (input.length() == 0)
		return ("char");
	else if (input.length() == 1 && (input[0] < 48 || input[0] > 57))
		return ("char");
	else
		throw std::runtime_error("faulty input");
}

/*
You have to first detect the type of the literal passed as parameter,
convert it from string to its actual type, then convert it explicitly
to the three other data types. Lastly, display the results as shown below.
*/
