/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:58:23 by djagusch          #+#    #+#             */
/*   Updated: 2023/12/18 17:01:04 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	// Bureaucrat	maggie("Margaret Evelyn Lenny", 140);
	// Bureaucrat	bart("Bartholomew Jojo", 75);
	// Bureaucrat	lisa("Lisa Marie", 50);
	Bureaucrat	marge("Marjorie Jaqueline", 1);
	// Bureaucrat	homer("Homer Jay", 10);
	// Intern		millhouse;

	// AForm *array[] = {
	// 	millhouse.makeForm("RobotomyRequestForm", "Bender"),
	// 	//millhouse.makeForm("stuff", "Bender"),
	// 	millhouse.makeForm("RobotomyRequestForm", "C3PO"),
	// 	millhouse.makeForm("RobotomyRequestForm", "Wall-e"),
	// 	millhouse.makeForm("RobotomyRequestForm", "Optimus Prime"),
	// 	millhouse.makeForm("ShrubberyCreationForm", "garden"),
	// 	millhouse.makeForm("ShrubberyCreationForm", "park"),
	// 	millhouse.makeForm("ShrubberyCreationForm", "school"),
	// 	millhouse.makeForm("ShrubberyCreationForm", "The drawer"),
	// 	millhouse.makeForm("PresidentialPardonForm", "Al Capone"),
	// 	millhouse.makeForm("PresidentialPardonForm", "Ted Bundy"),
	// 	millhouse.makeForm("PresidentialPardonForm", "Pablo Escobar"),
	// 	millhouse.makeForm("PresidentialPardonForm", "Aileen Wuornos"),
	// };

	// std::cout << "============== Maggie ==============" << std::endl;
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *) && array[i]; i++){
	// 	maggie.signForm(*(array[i]));
	// }
	// std::cout << std::endl;
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *) && array[i]; i++){
	// 	maggie.executeForm(*(array[i]));
	// }
	// std::cout << std::endl;
	// 	std::cout << "============== Bart ==============" << std::endl;
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *) && array[i]; i++){
	// 	bart.signForm(*(array[i]));
	// }
	// std::cout << std::endl;
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *) && array[i]; i++){
	// 	bart.executeForm(*(array[i]));
	// }
	// std::cout << std::endl;
	// 	std::cout << "============== Lisa ==============" << std::endl;
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *) && array[i]; i++){
	// 	lisa.signForm(*(array[i]));
	// }
	// std::cout << std::endl;
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *) && array[i]; i++){
	// 	lisa.executeForm(*(array[i]));
	// }
	// std::cout << std::endl;
	// 	std::cout << "============== Marge ==============" << std::endl;
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *) && array[i]; i++){
	// 	marge.signForm(*(array[i]));
	// }
	// std::cout << std::endl;
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *) && array[i]; i++){
	// 	marge.executeForm(*(array[i]));
	// }
	// std::cout << std::endl;
	// 	std::cout << "============== Homer ==============" << std::endl;
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *) && array[i]; i++){
	// 	homer.signForm(*(array[i]));
	// }
	// std::cout << std::endl;
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *) && array[i]; i++){
	// 	homer.executeForm(*(array[i]));
	// }
	// for (size_t i = 0; i < sizeof(array) / sizeof(AForm *); i++){
	// 	if (array[i])
	// 		delete array[i];
	// }

	RobotomyRequestForm yomomma("BLA");
	marge.signForm(yomomma);
	
	for (int i = 0; i < 100; i++)
		marge.executeForm(yomomma);


	//millhouse.makeForm("eating request", "Apple pie");

	return 0;
}
