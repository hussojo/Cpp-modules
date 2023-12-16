#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\n-------BUREAUCRAT 1--------" << std::endl;
	try {
		Bureaucrat cat2("Masa", 35);
		std::cout << cat2 << std::endl;
		Form form1("study aid", 35, 40);
		std::cout << form1 << std::endl;

		cat2.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
