#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	_target = "";
	// std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
AForm("RobotomyRequestForm", 72, 45)
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

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == true)
	{
		if (executor.getGrade() <= this->getGradeToExecute())
		{
			int random_variable = std::rand() % 100;

			std::cout << "*** drrrrrrrrrrrrilling noice ***" << std::endl;
			if (random_variable < 50)
				std::cout << _target << " has been robotomized successfully!" << std::endl;
			else
				std::cout << "Robotomy of " << _target << " failed! SOS" << std::endl;
		}
	}
	else
		throw GradeTooLowException();
}

