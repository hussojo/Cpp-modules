#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form();
		Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute);
		Form(const Form &other);
		~Form();

		Form& operator=(const Form &other);
		void checkGrade(const Form &f) const;
		void beSigned(Bureaucrat &b);

		class GradeTooHighException : public std::exception {
			public: const char* what() const throw(); };
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();	};

		std::string getName() const;
		bool getIsSigned() const;
		unsigned int getGradeToSign() const;
		unsigned int getGradeToExecute() const;

	private:
		const std::string _name;
		bool _isSigned;
		const unsigned int _gradeToSign;
		const unsigned int _gradeToExecute;
} ;

std::ostream &operator<<(std::ostream &os, const Form &f);

#endif

