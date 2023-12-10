#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\n-------BUREAUCRAT 1--------" << std::endl;
	// testing that defaultconstructor works and that exception gets throwed for 0 initialized _grade
	try {
		Bureaucrat cat1;
		std::cout << cat1 << std::endl;
		Bureaucrat cat5(cat1);
		std::cout << cat5 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n-------BUREAUCRAT 2-------- " << std::endl;
	Bureaucrat cat2("Masa", 149);
	std::cout << cat2 << std::endl;
	std::cout << "\n-------decrementing-------- " << std::endl;
	try {
		cat2.decrementGrade();
		std::cout << cat2.getGrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n-------incrementing-------- " << std::endl;
	try {
		cat2.incrementGrade();
		std::cout << cat2.getGrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n-------BUREAUCRAT 3--------"  << std::endl;
	try {
		Bureaucrat cat3("Tepa", 155);
		std::cout << cat3 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}