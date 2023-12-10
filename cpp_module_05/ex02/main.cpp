#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\n-------BUREAUCRAT 1--------" << std::endl;
	try {
		Bureaucrat cat2("Masa", 35);
		std::cout << cat2 << std::endl;
		AForm form1("study aid", 35, 40);
		std::cout << form1 << std::endl;

		form1.beSigned(cat2);
		std::cout << form1 << std::endl;
		cat2.signForm(form1);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
