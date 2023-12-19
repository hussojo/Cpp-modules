#include "Bureaucrat.hpp"

int main()
{

	Form form1("study leave", 75, 80);
	Form form2("neighbour execution", 2, 10);
	Form form3("nonsense form", 150, 90);

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;

	try {
		std::cout << "\n-------BUREAUCRAT 1--------" << std::endl;
		Bureaucrat cat1("Dude", 71);
		std::cout << cat1 << std::endl;
		cat1.signForm(form1);
		cat1.signForm(form2);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\n-------BUREAUCRAT 2-------- " << std::endl;
		Bureaucrat high("High priestess", 1);
		std::cout << high << std::endl;
		high.signForm(form1);
		high.signForm(form2);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\n-------BUREAUCRAT 3-------- " << std::endl;
		Bureaucrat low("Basic peasant", 150);
		std::cout << low << std::endl;
		low.signForm(form1);
		low.signForm(form2);
		low.signForm(form3);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
