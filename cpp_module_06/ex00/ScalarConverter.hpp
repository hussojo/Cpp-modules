#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class ScalarConverter {
	public:
		// findTypes.cpp
		static const std::string findInputType(const std::string &input);
		static bool isInt(const std::string &input);
		static bool isFloat(const std::string &input);
		static bool isDouble(const std::string &input);

		//convertTypes.cpp
		static void convertChar(const std::string &input);
		static void convertInt(const std::string &input);
		static void convertFloat(const std::string &input);
		static void convertDouble(const std::string &input);
		static void convert(const std::string &str);

		//printTypes.cpp
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

		static bool impossibleI;
		static bool impossibleF;
		static bool impossibleD;
} ;

#endif

