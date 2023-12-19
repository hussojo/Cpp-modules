#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\n-------BUREAUCRAT 1--------" << std::endl;
	try {
		Bureaucrat cat1("dude", 75);
		std::cout << cat1 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n-------BUREAUCRAT 2-------- " << std::endl;
	Bureaucrat high("High priestess", 1);
	std::cout << high ;
	std::cout << "\n-------incrementing-------- " << std::endl;
	try {
		high.incrementGrade();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n-------BUREAUCRAT 3-------- " << std::endl;
	Bureaucrat low("Basic peasant", 150);
	std::cout << low ;
	std::cout << "\n-------decrementing-------- " << std::endl;
	try {
		low.decrementGrade();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n-------BUREAUCRAT 4--------"  << std::endl;
	try {
		Bureaucrat cat3("Tepa", 155);
		std::cout << cat3 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n-------BUREAUCRAT 5--------"  << std::endl;
	try {
		Bureaucrat cat4("Tepa", -10);
		std::cout << cat4 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
