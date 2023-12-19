#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

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

AForm *Intern::makePresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makeShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::~Intern()
{
	// std::cout << "Intern destructed" << std::endl;
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	const int formCount = 3;
	std::string formNameArr[formCount] = {"PresidentialPardonForm",
		"RobotomyRequestForm", "ShrubberyCreationForm"};

	AForm *formptr[formCount] = {makePresidentialForm(formTarget),
		makeRobotomyForm(formTarget), makeShrubberyForm(formTarget)};

	for (int i = 0; i < formCount; i++)
	{
		if (formName == formNameArr[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			for (int j = 0; j < formCount; j++)
			{
				if (j != i)
					delete formptr[j];
			}
			return formptr[i];
		}
	}
	for (int j = 0; j < formCount; j++)
			delete formptr[j];
	std::cout << "Form name invalid, intern is confused" << std::endl;
	return NULL;
}
