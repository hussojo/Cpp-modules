#include "Bureaucrat.hpp"

int main()
{
	try {
		std::cout << "\n-------BUREAUCRAT 1--------" << std::endl;
		Bureaucrat cat1("Dude", 75);
		std::cout << cat1 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\n-------BUREAUCRAT 2-------- " << std::endl;
		Bureaucrat high("High priestess", 1);
		std::cout << high << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\n-------BUREAUCRAT 3-------- " << std::endl;
		Bureaucrat low("Basic peasant", 150);
		std::cout << low << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\n-------BUREAUCRAT 4--------"  << std::endl;
		Bureaucrat cat3("Tepa", 155);
		std::cout << cat3 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\n-------BUREAUCRAT 5--------"  << std::endl;
		Bureaucrat cat4("Tepa", -10);
		std::cout << cat4 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
