#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class Form {
	public:
		Form();
		Form(const Form &other);
		Form& operator=(const Form &other);
		~Form();

		void checkGrade(const Form &f) const;

		// beSigned
		// signForm

	/*
	Same as before, write getters for all attributes and an
	overload of the insertion («) operator that prints all the form’s informations.
	*/

		class GradeTooHighException : public std::exception {
			public: const char* what() const throw(); };
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();	};

		// getters and setters

	private:
		const std::string _name;
		bool _isSigned;
		const unsigned int _gradeToSign;
		const unsigned int _gradeToExecute;
} ;

#endif
