/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:14:46 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/20 08:14:03 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	// std::cout << "Constructor called" << std::endl;
	// PhoneBook::index = 0;
}

PhoneBook::~PhoneBook() {
	// std::cout << "Destructor called" << std::endl;

}

void	PhoneBook::display_one_contact() {
	int aux;
	std::string firstname, lastname, nickname;

	std::cout << "Give an index to display: " << std::flush;
	std::cin >> aux;
	while (1)
	{
		if (aux >= 1 && aux <9)
		{
			std::cout << std::setw(10) << std::left << aux << std::left << std::endl;
			std::cout << std::setw(10) << std::left << "FIRSTNAME: " << contacts[aux - 1].getFirstName() << std::endl;
			std::cout << std::setw(10) << std::left << "LASTNAME: " << contacts[aux - 1].getLastName() << std::endl;
			std::cout << std::setw(10) << std::left << "NICKNAME: " << contacts[aux - 1].getNickName() << std::endl;
			std::cout << std::setw(10) << std::left << "NUMBER: " << contacts[aux - 1].getNumber() << std::endl;
			std::cout << std::setw(10) << std::left << "SECRET: " << contacts[aux - 1].getSecret() << std::endl;
			break ;
		}
		else
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
		std::cout << std::setw(10) << std::left << aux+1 << std::left << " | " << std::flush;
		std::cout << std::setw(10) << std::left << firstname << " | " << std::flush;
		std::cout << std::setw(10) << std::left << lastname << " | " << std::flush;
		std::cout << std::setw(10) << std::left << nickname << std::endl;
	}
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

