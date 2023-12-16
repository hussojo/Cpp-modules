#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat masa("Masa", 15);
		std::cout << masa << std::endl;
		Bureaucrat tepa("Tepa", 3);
		std::cout << tepa << std::endl;
		Bureaucrat menni("Menni", 8);
		std::cout << menni << std::endl;


		ShrubberyCreationForm scf("home");
		std::cout << scf << std::endl;

		PresidentialPardonForm ppf("Teemu");
		std::cout << ppf << std::endl;

		RobotomyRequestForm rrf("Karen");
		std::cout << rrf << std::endl;

		masa.signForm(scf);
		masa.executeForm(scf);
		std::cout << "\n";
		tepa.signForm(ppf);
		tepa.executeForm(ppf);
		std::cout << "\n";
		menni.signForm(rrf);
		menni.executeForm(rrf);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
