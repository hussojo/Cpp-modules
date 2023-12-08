#include "Form.hpp"

Form::Form() : _name(""), _isSigned(false), _gradeToSign(0), _gradeToExecute(0)
{
	checkGrade(*this);
	std::cout << "Form default constructor called!" << std::endl;
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute) :_name(name),
 _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	_isSigned = false;
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned),
	_gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	checkGrade(other);
}

Form::~Form()
{
	// std::cout << "Form destructor called!" << std::endl;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}

void Form::checkGrade(const Form &f) const
{
	if (f._gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (f._gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

void Form::beSigned(Bureaucrat &b) // ADD IF ALREADY SIGNED?? DOES NOPT WORK
{
	if (this->_isSigned == false)
	{
		if (b.getGrade() <= this->getGradeToSign())
			_isSigned = true;
		else
			throw Form::GradeTooLowException();
	}
	else
		std::cout << this->getName() << " is already signed" << std::endl;
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

unsigned int Form::getGradeToSign() const
{
	return _gradeToSign;
}

unsigned int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

const char *Form::GradeTooHighException::what() const throw()
{
	 return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	 return "Grade is too low!";
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "--form info--" <<
	"\nName: " << f.getName() <<
	"\nSigned: " << f.getIsSigned() <<
	"\nGrade to Sign: " << f.getGradeToSign() <<
	"\nGrade to Execute: " << f.getGradeToExecute() << std::endl;

	return os;
}
