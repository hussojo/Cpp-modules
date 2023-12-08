#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		class GradeTooHighException : public std::exception {
			public: const char* what() const throw(); };
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();	};

		void checkGrade(const Bureaucrat &b) const ;
		void incrementGrade();
		void decrementGrade();

		std::string getName() const;
		unsigned int getGrade() const;

		// increment and decrement grade!

	private:
		std::string _name;
		unsigned int _grade;
} ;

#endif
