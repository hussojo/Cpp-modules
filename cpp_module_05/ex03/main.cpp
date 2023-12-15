#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Intern i;
		AForm form1 = i.makeForm("ShrubberyCreationForm", "home");
		// Bureaucrat masa("Masa", 15);
		// std::cout << masa << std::endl;
		// std::cout << form1 << std::endl;

		// masa.signForm(form1);
		// form1.execute(masa);

		// Bureaucrat tepa("Tepa", 60);
		// Bureaucrat menni("Menni", 80);
		// std::cout << tepa << std::endl;
		// PresidentialPardonForm ppf("Teemu");
		// std::cout << ppf << std::endl;

		// tepa.signForm(ppf);
		// ppf.execute(menni);

		// RobotomyRequestForm rrf("Karen");
		// std::cout << rrf << std::endl;

		// menni.signForm(rrf);
		// rrf.execute(menni);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
