#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "\n-------BUREAUCRAT 1--------" << std::endl;
	try {
		Bureaucrat cat2("Masa", 15);
		std::cout << cat2 << std::endl;
		ShrubberyCreationForm form1;
		std::cout << form1 << std::endl;

		form1.beSigned(cat2);
		cat2.signForm(form1);

	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
