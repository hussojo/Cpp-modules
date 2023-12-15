#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &);
		Intern &operator=(const Intern &);
		~Intern();

		AForm &makeForm(std::string formName, std::string formTarget);
} ;

#endif
