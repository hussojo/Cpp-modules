#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat {
	public:
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &other);

		class GradeTooHighException : public std::exception {
			public: const char* what() const throw(); };
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();	};

		void checkGrade(const Bureaucrat &b) const ;
		void incrementGrade();
		void decrementGrade();

		std::string getName() const;
		unsigned int getGrade() const;

	private:
		Bureaucrat();
		const std::string _name;
		int _grade;
} ;

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif
