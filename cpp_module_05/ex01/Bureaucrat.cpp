#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(0)
{
	checkGrade(*this);
	std::cout << "Bureaucrat (default) created!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	checkGrade(*this);
	std::cout << "Created bureaucrat called\n\tname: " << _name << "\n\tgrade: " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	checkGrade(other);
	*this = other;
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

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructed!" << std::endl;
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
