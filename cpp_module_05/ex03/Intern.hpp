#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern &);
		Intern &operator=(const Intern &);

		AForm *makeForm(std::string formName, std::string formTarget);


	private:
		AForm *makePresidentialForm(std::string target);
		AForm *makeRobotomyForm(std::string target);
		AForm *makeShrubberyForm(std::string target);
} ;

typedef AForm *(Intern::*formptr)(std::string target) const;

#endif
