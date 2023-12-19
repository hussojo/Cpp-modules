#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	_target = "";
	// std::cout << "PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
	// std::cout << "PresidentialPardonForm created with target" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other)
{
	*this = other;
	// std::cout << "PresidentialPardonForm copied" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		_target = other._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm destructed" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == true && this->getIsDone() == false)
	{
		if (executor.getGrade() <= this->getGradeToExecute())
			std::cout << _target << " has been pardoned by Zaphod Beeblebrox. Hallelujah." << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}
