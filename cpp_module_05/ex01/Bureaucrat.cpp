#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(0)
{
		std::cout << "Bureaucrat (default) created!" << std::endl;
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
	std::cout << "Bureaucrat destructed!" << std::endl;
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
	this->_grade--;
	checkGrade(*this);
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	checkGrade(*this);
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
	 return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	 return "Grade is too low!";
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

void Bureaucrat::signForm(Form &f)
{
	try
	{
		if (f.getIsSigned() == true)
			std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << this << " could not sign " << f << "because" << e.what() << std::endl;
	}
}
