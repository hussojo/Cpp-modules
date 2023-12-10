#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
		virtual ~PresidentialPardonForm();

		// void requestRobotomy(const std::string &target);

	private:
		std::string _target;
} ;

#endif
