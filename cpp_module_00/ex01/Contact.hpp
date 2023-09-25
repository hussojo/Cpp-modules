/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:52:32 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/20 10:01:23 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"
#include <string>

class Contact {
private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string Number;
	std::string Secret;
public:
	Contact(std::string fname, std::string lname, std::string nname, std::string number, std::string secret);
	Contact();
	~Contact();
	std::string	getFirstName();
	void	setFirstName();
	std::string	getLastName();
	void	setLastName();
	std::string	getNickName();
	void	setNickName();
	std::string	getNumber();
	void	setNumber();
	std::string	getSecret();
	void	setSecret();
} ;

#endif
