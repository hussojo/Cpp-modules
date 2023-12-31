/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:09:27 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/20 10:18:46 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact(std::string fname, std::string lname, std::string nname, std::string number, std::string secret) {
	this->FirstName = fname;
	this->LastName = lname;
	this->NickName = nname;
	this->Number = number;
	this->Secret = secret;
}

Contact::Contact() {
	// std::cout << "Constructor called" << std::endl;
}

Contact::~Contact() {
	// std::cout << "Destructor called" << std::endl;
}

std::string	Contact::getFirstName() {
	return FirstName;
}

void	Contact::setFirstName() {
	do
	{
		std::cout << "\033[1;34mEnter first name: \033[0m" << std::flush;
		std::getline(std::cin, FirstName);
		if (std::cin.eof())
			exit(1);
		if (FirstName.empty())
			std::cout << "First name cannot be an empty string." << std::endl;
	}
	while (FirstName.empty());
}

std::string	Contact::getLastName() {
	return LastName;
}

void	Contact::setLastName() {
	do
	{
		std::cout << "\033[1;34mEnter last name: \033[0m" << std::flush;
		std::getline(std::cin, LastName);
		if (std::cin.eof())
			exit(1);
		if (LastName.empty())
			std::cout << "Last name cannot be an empty string." << std::endl;
	}
	while (LastName.empty());
}

std::string	Contact::getNickName() {
	return NickName;
}

void	Contact::setNickName() {
	do
	{
		std::cout << "\033[1;34mEnter nickname: \033[0m" << std::flush;
		std::getline(std::cin, NickName);
		if (std::cin.eof())
			exit(1);
		if (NickName.empty())
			std::cout << "Nickname cannot be an empty string." << std::endl;
	}
	while (NickName.empty());
}

std::string	Contact::getNumber() {
	return Number;
}
void	Contact::setNumber() {
	do
	{
		std::cout << "\033[1;34mEnter number: \033[0m" << std::flush;
		std::getline(std::cin, Number);
		if (std::cin.eof())
			exit(1);
		if (Number.empty())
			std::cout << "Number cannot be an empty string." << std::endl;
	}
	while (Number.empty());
}

std::string	Contact::getSecret() {
	return Secret;
}

void	Contact::setSecret() {
	do
	{
		std::cout << "\033[1;34mEnter secret: \033[0m"<< std::flush;
		std::getline(std::cin, Secret);
		if (std::cin.eof())
			exit(1);
		if (Secret.empty())
			std::cout << "Secret cannot be an empty string." << std::endl;
	}
	while (Secret.empty());
}
