#include "ScalarConverter.hpp"

void ScalarConverter::convertChar(const std::string &input)
{
	_char = static_cast<char>(input[0]);
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}
void ScalarConverter::convertInt(const std::string &input)
{
	std::stringstream ss(input);
	ss >> _int;
	if (ss.fail())
	{
		_impossibleD = true;
		_impossibleI = true;
		_impossibleF = true;
	}
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}
void ScalarConverter::convertFloat(const std::string &input)
{
	std::string inputCopy = input;
	inputCopy.erase(inputCopy.length() - 1);
	std::stringstream ss(inputCopy);
	ss >> _float;
	if (ss.fail())
	{
		_impossibleD = true;
		_impossibleI = true;
		_impossibleF = true;
	}
	_impossibleC = true;
	_int = static_cast<int>(_float);
	_double = static_cast<double>(_float);
}
void ScalarConverter::convertDouble(const std::string &input)
{
	std::stringstream ss(input);
	ss >> _double;
	if (ss.fail())
	{
		_impossibleD = true;
		_impossibleI = true;
		_impossibleF = true;
	}
	_impossibleC = true;
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
}
void ScalarConverter::convert(const std::string &str)
{
	if (!isPseudo(str))
	{
		ScalarConverter::_type = findInputType(str);
		if (_type.compare("char") == 0)
			convertChar(str);
		if (_type.compare("int") == 0)
			convertInt(str);
		if (_type.compare("float") == 0)
			convertFloat(str);
		if (_type == "double")
			convertDouble(str);
	}
	printChar();
	printInt();
	printFloat();
	printDouble();
}
