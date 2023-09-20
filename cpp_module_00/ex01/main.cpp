/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:48:11 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/20 09:23:43 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	Contact contact;
	PhoneBook pb;
	std::string choice;

	std::cout << "WELCOME TO THE PHONEBOOK" << std::endl;
	std::cout << "Do you want to ADD, SEARCH or EXIT? " << std::flush;
	std::cin >> choice;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (1)
	{
		if (std::cin.eof())
			exit(1);
		else if (choice == "EXIT" || choice == "exit")
			break ;
		else if (choice == "ADD" || choice == "add")
		{
			contact.setFirstName();
			contact.setLastName();
			contact.setNickName();
			contact.setNumber();
			contact.setSecret();
			pb.add_contact(contact);
		}
		else if (choice == "SEARCH" || choice == "search")
		{
			pb.display_contacts();
		}
		std::cout << "Do you want to ADD, SEARCH or EXIT? " << std::flush;
		std::cin >> choice;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (0);
}

