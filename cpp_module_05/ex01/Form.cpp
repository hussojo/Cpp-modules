#include "Form.hpp"

Form::Form() : _name(""), _isSigned(false), _gradeToSign(0), _gradeToExecute(0)
{
	checkGrade(*this);
	std::cout << "Form default constructor called!" << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned),
	_gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	checkGrade(other);
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}

Form::~Form()
{
	std::cout << "Form default destructor called!" << std::endl;
}

void Form::checkGrade(const Form &f) const
{
	if (f._gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (f._gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	 return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	 return "Grade is too low!";
}
