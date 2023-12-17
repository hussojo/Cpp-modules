#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter {
	public:
		static void convert(std::string str);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();
} ;

#endif

/*

You have to first detect the type of the literal passed as parameter,
convert it from string to its actual type, then convert it explicitly
to the three other data types. Lastly, display the results as shown below.
*/
