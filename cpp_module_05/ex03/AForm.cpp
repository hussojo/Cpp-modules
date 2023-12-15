#include "AForm.hpp"

AForm::AForm() : _name(""), _isSigned(false), _gradeToSign(0), _gradeToExecute(0)
{
	checkGrade(*this);
	// std::cout << "AForm (default) created" << std::endl;
}

AForm::AForm(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute) :_name(name),
 _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	_isSigned = false;
}

AForm::AForm(const AForm &other) : _name(other._name), _isSigned(other._isSigned),
	_gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	// std::cout << "AForm (copy) created" << std::endl;
	checkGrade(other);
}

AForm::~AForm()
{
	// std::cout << "AForm destructed" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}

void AForm::checkGrade(const AForm &f) const
{
	if (f._gradeToSign < 1 || _gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (f._gradeToSign > 150 || _gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

void AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getGradeToSign())
		_isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == true && executor.getGrade() <= this->getGradeToExecute())
		executeForm();
	else if (this->getIsSigned() == false)
		std::cerr << this->getName() << " can't be executed because it's not signed!" << std::endl;
	else
		throw AForm::GradeTooLowException();
}

void AForm::executeForm() const
{
}

std::string AForm::getName() const
{
	return _name;
}

bool AForm::getIsSigned() const
{
	return _isSigned;
}

unsigned int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

unsigned int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	 return "Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	 return "Grade is too low.";
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << "--form info--" <<
	"\nName: " << f.getName() <<
	"\nSigned: " << f.getIsSigned() <<
	"\nGrade to Sign: " << f.getGradeToSign() <<
	"\nGrade to Execute: " << f.getGradeToExecute() << std::endl;

	return os;
}
