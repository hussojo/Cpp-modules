#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(0)
{
		// std::cout << "Bureaucrat (default) created!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	checkGrade(*this);
	// std::cout << "Created bureaucrat with name and grade" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	checkGrade(other);
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat destructed!" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_name = other._name;
		_grade = other._grade;
	}
	return *this;
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade > 1)
		this->_grade--;
	else
		std::cout << "Grade is already highest possible." << std::endl;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade < 150)
		this->_grade++;
	else
		std::cout << "Grade is already lowest possible." << std::endl;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	 return "Grade is too high.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	 return "Grade is too low.";
}
void Bureaucrat::checkGrade(const Bureaucrat &b) const
{
	if (b._grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	if (b._grade > 150 )
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return os;
}

void Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		if (f.getIsSigned() == true && f.getIsDone() == false)
			std::cout << this->getName() << " signed " << f.getName() << std::endl;
		else
			std::cout << f.getName() << " is already signed!" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << this->getName() << " could not sign " << f.getName()
			<< ", because: " << e.what() << std::endl;
	}
}


void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		if (form.getIsSigned() == true && form.getIsDone() == false)
		{
			if (this->getGrade() <= form.getGradeToExecute())
			{
				form.execute(*this);
				std::cout << this->getName() << " executed " << form.getName() << std::endl;
			}
			else if (this->getGrade() > form.getGradeToExecute())
				throw Bureaucrat::GradeTooLowException();
		}
		else if (form.getIsSigned() == false)
			std::cout << this->getName() << " could not execute " << form.getName()
			<< ", because it's not signed." << std::endl;
		else if (form.getIsSigned() == true && form.getIsDone() == true)
			std::cout << form.getName() << " is already executed." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << this->getName() << " could not execute " << form.getName()
		<< ", because: " << e.what() << std::endl;
	}
}
