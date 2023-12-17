#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class ScalarConverter {
	public:
		static const std::string findInputType(const std::string &input);
		static bool isInt(const std::string &input);
		static void convertChar(const std::string &input);
		static void convertInt(const std::string &input);
		static void convert(const std::string &str);

		static void printChar();
		static void printInt();
		static void printFloat();
		static void printDouble();

		// // getters
		// int getI() const;
		// float getF() const;
		// double getD() const;
		// char getC() const;

		// // setters
		// void setI(int val);
		// void setF(float val);
		// void setD(double val);
		// static void setC(char val);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();

		static char _char;
		static int _int;
		static float _float;
		static double _double;
		static std::string _type;

} ;

#endif

