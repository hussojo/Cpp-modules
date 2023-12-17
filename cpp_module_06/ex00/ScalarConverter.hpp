#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class ScalarConverter {
	public:
		static void printConvertions();
		static const std::string findInputType(const std::string &input);
		static bool isInt(const std::string &input);
		static void convertChar(const std::string &input);
		static void convertInt(const std::string &input);
		static void convert(const std::string &str);

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

		static int _int;
		static float _float;
		static double _double;
		static char _char;
		static std::string _type;

} ;

#endif

