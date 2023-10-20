/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:14:46 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/20 07:32:38 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	// std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook() {
	// std::cout << "Destructor called" << std::endl;

}

void	PhoneBook::display_one_contact() {
	int aux;
	std::string input;
	std::string firstname, lastname, nickname;

	std::cout << "Give an index to display: " << std::flush;
	std::getline(std::cin, input);
	while (1)
	{
		if (input.empty() || input.length() > 1)
		{
			std::cout << "Please enter a digit between 1 and 8! " << std::flush;
			std::getline(std::cin, input);
		}
		aux = std::stoi(input);
		if (aux >= 1 && aux <9)
		{
			std::cout << std::setw(10) << std::right << "\033[1;34mFIRSTNAME: \033[0m" << contacts[aux - 1].getFirstName() << std::endl;
			std::cout << std::setw(10) << std::right << "\033[1;34mLASTNAME: \033[0m" << contacts[aux - 1].getLastName() << std::endl;
			std::cout << std::setw(10) << std::right << "\033[1;34mNICKNAME: \033[0m" << contacts[aux - 1].getNickName() << std::endl;
			std::cout << std::setw(10) << std::right << "\033[1;34mNUMBER: \033[0m" << contacts[aux - 1].getNumber() << std::endl;
			std::cout << std::setw(10) << std::right << "\033[1;34mSECRET: \033[0m" << contacts[aux - 1].getSecret() << std::endl;
			break ;
		}
		if (aux < 1 || aux >= 9)
		{
			std::cout << "Phone book has only 8 entrys, please select number between 1 and 8: " << std::endl;
			std::cin >> aux;
		}
	}
}

void	PhoneBook::display_contacts() {
	int aux = 0;
	std::string firstname, lastname, nickname;
	Contact contact = contacts[aux];

	std::cout << "\033[1;33m---------------------------------------------------" << std::endl;
	for (aux = 0; aux < 8; aux++)
	{
		firstname = contacts[aux].getFirstName();
		if (firstname.length() > 10)
		{
			firstname.resize(10);
			firstname.replace(9, 1,  ".");
		}
		lastname = contacts[aux].getLastName();
		if (lastname.length() > 10)
		{
			lastname.resize(10);
			lastname.replace(9, 1,  ".");
		}
		nickname = contacts[aux].getNickName();
		if (nickname.length() > 10)
		{
			nickname.resize(10);
			nickname.replace(9, 1,  ".");
		}
		std::cout << std::setw(10) << std::right << aux+1 << std::left << " | " << std::flush;
		std::cout << std::setw(10) << std::right << firstname << " | " << std::flush;
		std::cout << std::setw(10) << std::right << lastname << " | " << std::flush;
		std::cout << std::setw(10) << std::right << nickname <<  " | "  << std::endl;
	}
	std::cout << "---------------------------------------------------\033[0m" << std::endl;
	this->display_one_contact();
}

void	PhoneBook::add_contact(Contact contact) {
	std::string fname, lname, nname, number, secret;
	fname = contact.getFirstName();
	lname = contact.getLastName();
	nname = contact.getNickName();
	number = contact.getNumber();
	secret = contact.getSecret();
	Contact newContact(fname, lname, nname, number, secret);
	if (this->index < 8)
	{
		this->contacts[this->index] = newContact;
		this->index++;
	}
	else
	{
		this->index = 0;
		this->contacts[this->index] = newContact;
	}
}

