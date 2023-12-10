#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try {
		Bureaucrat masa("Masa", 15);
		std::cout << masa << std::endl;
		ShrubberyCreationForm scf("home");
		std::cout << scf << std::endl;

		scf.beSigned(masa);
		masa.signForm(scf);
		scf.execute(masa);

		Bureaucrat tepa("Tepa", 10);
		Bureaucrat menni("Menni", 1);
		std::cout << tepa << std::endl;
		PresidentialPardonForm ppf("Teemu");
		std::cout << ppf << std::endl;

		ppf.beSigned(tepa);
		tepa.signForm(ppf);
		ppf.execute(menni);

		RobotomyRequestForm rrf("Karen");
		std::cout << rrf << std::endl;

		rrf.beSigned(menni);
		menni.signForm(rrf);
		rrf.execute(menni);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
