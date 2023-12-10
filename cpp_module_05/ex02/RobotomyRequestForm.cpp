#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	_target = "";
	// std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
AForm("RobotomyRequestForm", 145, 137)
{
	_target = target;
	// std::cout << "RobotomyRequestForm created with target" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
	*this = other;
	// std::cout << "RobotomyRequestForm copied" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		_target = other._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm destructed" << std::endl;
}

void RobotomyRequestForm::requestRobotomy(const std::string &target)
{
	std::srand(std::time(0)); // use current time as seed for random generator
	int random_variable = std::rand() % 100; // generates random number between 0 and 99

	std::cout << "*drilling noice*\t*drilling noice*" << std::endl;
	if (random_variable < 50)
		std::cout << target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy of " << target << " failed! SOS" << std::endl;
}

