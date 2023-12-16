#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;

		AForm* ppf;
		ppf = someRandomIntern.makeForm("PresidentialPardonForm", "Teemu");
		std::cout << *ppf << std::endl;

		AForm* rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Karen");
		std::cout << *rrf << std::endl;

		AForm* scf;
		scf = someRandomIntern.makeForm("ShrubberyCreationForm", "Park");
		std::cout << *scf << std::endl;

		Bureaucrat masa("Masa", 15);
		std::cout << masa << std::endl;
		Bureaucrat tepa("Tepa", 3);
		std::cout << tepa << std::endl;
		Bureaucrat menni("Menni", 8);
		std::cout << menni << std::endl;

		masa.signForm(*scf);
		masa.executeForm(*scf);
		std::cout << "\n";
		tepa.signForm(*ppf);
		tepa.executeForm(*ppf);
		std::cout << "\n";
		menni.signForm(*rrf);
		menni.executeForm(*rrf);

		delete ppf;
		delete rrf;
		delete scf;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
