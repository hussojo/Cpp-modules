#include "Intern.hpp"

Intern::Intern()
{
	// std::cout << "Intern (default) created" << std::endl;
}

Intern::Intern(const Intern &)
{
	// std::cout << "Intern (copy) created" << std::endl;
}

Intern &Intern::operator=(const Intern &)
{
	return *this;
}

Intern::~Intern()
{
	// std::cout << "Intern destructed" << std::endl;
}

AForm &Intern::makeForm(std::string formName, std::string formTarget)
{
	// const int formCount = 3;
	// std::string formArr[formCount] = {"PresidentialPardonForm",
	// 	"RobotomyRequestForm", "ShrubberyCreationForm"};
	// for (int i = 0; i < formCount; i++)
	// {
	// 	if (formName == formArr[i])
	// 	{
	// 		std::cout << "Intern creates " << formName << std::endl;
	// 		return AForm *form(formName, formTarget);
	// 	}
	// }

}
