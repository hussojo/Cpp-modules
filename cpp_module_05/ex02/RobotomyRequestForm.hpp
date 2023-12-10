#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <ctime>


class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		virtual ~RobotomyRequestForm();

		virtual void executeForm() const;

	private:
		std::string _target;
} ;

#endif
