/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:48:11 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/20 10:20:09 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	display_cover() {
	std::cout << "\033[1;35m***********************************************\033[0m" << std::endl;
	std::cout << "\033[1;35m*       WELCOME TO MY AWESOME PHONEBOOK       *\033[0m" << std::endl;
	std::cout << "\033[1;35m***********************************************\033[0m" << std::endl;
}

int main(void)
{
	Contact contact;
	PhoneBook pb;
	std::string choice;

	display_cover();
	std::cout << "\033[1;32mDo you want to ADD, SEARCH or EXIT? \033[0m" << std::flush;
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
		std::cout << "\033[1;32mDo you want to ADD, SEARCH or EXIT? \033[0m" << std::flush;
		std::cin >> choice;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (0);
}

