/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:48:11 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/20 07:32:31 by jhusso           ###   ########.fr       */
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
	while (1)
	{
		std::cout << "\033[1;32mDo you want to ADD, SEARCH or EXIT? \033[0m" << std::flush;
		std::getline(std::cin, choice);
		if (choice.empty())
		{
			std::cout << "Invalild input" << std::endl;
			continue ;
		}
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
	}
	return (0);
}

