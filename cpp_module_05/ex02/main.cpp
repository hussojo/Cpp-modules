#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

// int main()
// {
// 	try
// 	{
// 		Bureaucrat masa("Masa", 30);
// 		std::cout << masa << std::endl;
// 		Bureaucrat tepa("Tepa", 3);
// 		std::cout << tepa << std::endl;
// 		Bureaucrat menni("Menni", 8);
// 		std::cout << menni << std::endl;


// 		ShrubberyCreationForm scf("home");
// 		std::cout << scf << std::endl;

// 		ShrubberyCreationForm scf2("home");
// 		std::cout << scf << std::endl;

// 		PresidentialPardonForm ppf("Teemu");
// 		std::cout << ppf << std::endl;

// 		RobotomyRequestForm rrf("Karen");
// 		std::cout << rrf << std::endl;

// 		masa.signForm(scf);
// 		masa.executeForm(scf);
// 		masa.executeForm(scf2);
// 		std::cout << "\n";
// 		tepa.signForm(ppf);
// 		tepa.executeForm(ppf);
// 		std::cout << "\n";
// 		menni.signForm(rrf);
// 		menni.executeForm(rrf);
// 	}
// 	catch (const std::exception& e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// 	return 0;
// }


int main()
{

	ShrubberyCreationForm scf("home");
	std::cout << scf << std::endl;

	RobotomyRequestForm rrf("Karen");
	std::cout << rrf << std::endl;

	PresidentialPardonForm ppf("Teemu");
	std::cout << ppf << std::endl;

	try {
		std::cout << "\n-------BUREAUCRAT 1--------" << std::endl;
		Bureaucrat cat1("Dude", 80);
		std::cout << cat1 << std::endl;
		cat1.signForm(scf);
		cat1.signForm(rrf);
		cat1.signForm(ppf);
		std::cout << "\n" ;
		cat1.executeForm(scf);
		cat1.executeForm(rrf);
		cat1.executeForm(ppf);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\n-------BUREAUCRAT 2-------- " << std::endl;
		Bureaucrat low("Basic peasant", 30);
		std::cout << low << std::endl;
		low.signForm(scf);
		low.signForm(rrf);
		low.signForm(ppf);
		std::cout << "\n" ;
		low.executeForm(scf);
		low.executeForm(rrf);
		low.executeForm(ppf);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\n-------BUREAUCRAT 3-------- " << std::endl;
		Bureaucrat high("High priestess", 1);
		std::cout << high << std::endl;
		high.signForm(scf);
		high.signForm(rrf);
		high.signForm(ppf);
		std::cout << "\n" ;
		high.executeForm(scf);
		high.executeForm(rrf);
		high.executeForm(ppf);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
