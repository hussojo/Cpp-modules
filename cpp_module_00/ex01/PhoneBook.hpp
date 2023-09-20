/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:15:46 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/19 15:16:52 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
	int index;
	Contact contacts[8];
public:
	void	add_contact(Contact contact);
	void	display_contacts();
	void	display_one_contact();
	PhoneBook();
	~PhoneBook();
} ;

#endif
