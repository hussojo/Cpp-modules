#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;


class AForm {
	public:
		AForm();
		AForm(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute);
		AForm(const AForm &other);
		virtual ~AForm();

		AForm& operator=(const AForm &other);

		void checkGrade(const AForm &f) const;
		void beSigned(Bureaucrat &b);
		virtual void execute(Bureaucrat const &executor) const = 0;

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

std::ostream &operator<<(std::ostream &os, const AForm &f);

#endif
