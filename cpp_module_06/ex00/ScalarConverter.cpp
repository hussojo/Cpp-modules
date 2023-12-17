#include "ScalarConverter.hpp"

int ScalarConverter::_int;
float ScalarConverter::_float;
double ScalarConverter::_double;
char ScalarConverter::_char;
std::string ScalarConverter::_type;

const std::string ScalarConverter::findInputType(const std::string &input)
{
	if (input.length() == 0)
		return ("char");
	else if (input.length() == 1 && (input[0] < 48 || input[0] > 57))
		return ("char");
	else if (isInt(input) == true)
		return ("int");
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
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}
void ScalarConverter::convert(const std::string &str)
{
	ScalarConverter::_type = findInputType(str);
	std::cout << "return: " << _type << std::endl;
	if (_type.compare("char") == 0)
		convertChar(str);
	if (_type.compare("int") == 0)
		convertInt(str);
	printChar();
	printInt();
	printFloat();
	printDouble();

}
void ScalarConverter::printChar()
{
	if (_char >= 32 && _char <= 126)
		std::cout << "char: " << _char << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::printInt()
{
	std::cout << "int: " << _int << std::endl;
}

void ScalarConverter::printFloat()
{
	std::cout << "float: " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
}

void ScalarConverter::printDouble()
{
	std::cout << "double: " << std::fixed << std::setprecision(1) << _double << std::endl;
}


// GETTERS AND SETTERS

// int ScalarConverter::getI() const { return i; }

// float ScalarConverter::getF() const { return f; }

// double ScalarConverter::getD() const { return d; }

// char ScalarConverter::getC() const { return c; }

// void ScalarConverter::setI(int val) { this->i = val; }

// void ScalarConverter::setF(float val) { this->f = val; }

// void ScalarConverter::setD(double val) { this->d = val; }

// void ScalarConverter::setC(char val) { this->c = val; }

/*
You have to first detect the type of the literal passed as parameter,
convert it from string to its actual type, then convert it explicitly
to the three other data types. Lastly, display the results as shown below.
*/
