#include "ScalarConverter.hpp"

void ScalarConverter::convertChar(const std::string &input)
{
	std::cout << "CHAR came here with: " << input << std::endl;
	_char = static_cast<char>(input[0]);
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}
void ScalarConverter::convertInt(const std::string &input)
{
	std::cout << "INT came here with: " << input << std::endl;
	std::stringstream ss(input);
	ss >> _int;
	if (ss.fail())
		impossibleI = true;
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}
void ScalarConverter::convertFloat(const std::string &input)
{
	std::cout << "FLOAT came here with: " << input << std::endl;
	std::string inputCopy = input;
	inputCopy.erase(inputCopy.length() - 1);
	std::stringstream ss(inputCopy);
	ss >> _float;
		impossibleF = true;
	_char = static_cast<char>(_float);
	_int = static_cast<int>(_float);
	_double = static_cast<double>(_float);
}
void ScalarConverter::convertDouble(const std::string &input)
{
	std::cout << "DOUBLE came here with: " << input << std::endl;
	std::stringstream ss(input);
	ss >> _double;
	if (ss.fail())
		impossibleD = true;
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
}
void ScalarConverter::convert(const std::string &str)
{
	ScalarConverter::_type = findInputType(str);
	std::cout << "return: " << _type << std::endl;
	if (_type.compare("char") == 0)
		convertChar(str);
	if (_type.compare("int") == 0)
		convertInt(str);
	if (_type.compare("float") == 0)
		convertFloat(str);
	if (_type == "double")
		convertDouble(str);
	printChar();
	printInt();
	printFloat();
	printDouble();
}
