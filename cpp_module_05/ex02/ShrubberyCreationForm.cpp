#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = "";
	// std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
	// std::cout << "ShrubberyCreationForm created with target" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	*this = other;
	// std::cout << "ShrubberyCreationForm copied" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		_target = other._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm destructed" << std::endl;
}

void ShrubberyCreationForm::executeForm() const
{
	std::ofstream file(_target + "_shrubbery");

	if (!file)
	{
		std::cerr << "File could not be created" << std::endl;
		return ;
	}

	for (int i = 0; i < 10 ; i++)
	{
		file << " Tree nro " << i + 1 << std::endl;
		file << "    ^    " << std::endl;
		file << "   ^^^   " << std::endl;
		file << "  ^^^^^  " << std::endl;
		file << " ^^^^^^^ " << std::endl;
		file << "^^^^^^^^^" << std::endl;
		file << "    |    " << std::endl;
	}
	file.close();
}
