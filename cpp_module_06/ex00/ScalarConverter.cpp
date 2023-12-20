#include "ScalarConverter.hpp"

int ScalarConverter::_int;
float ScalarConverter::_float;
double ScalarConverter::_double;
char ScalarConverter::_char;
std::string ScalarConverter::_type;
bool ScalarConverter::_impossibleI;
bool ScalarConverter::_impossibleF;
bool ScalarConverter::_impossibleD;
int ScalarConverter::_isDot;

ScalarConverter::ScalarConverter() {
	_char = 0;
	_int = 0;
	_float = 0.0f;
	_double = 0.0;
	_type = "";
	_impossibleI = false;
	_impossibleF = false;
	_impossibleD = false;
	_isDot = 0;
}

// ScalarConverter::ScalarConverter(const ScalarConverter &other) {}

// ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Scalarconverter destructed." << std::endl;

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
