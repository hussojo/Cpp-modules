/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:18:31 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 12:55:07 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :  type_("Default WRONGanimal")
{
	std::cout << type_ << " has been constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	this->type_ = other.type_;
	std::cout << "WrongAnimal copy constructor has been called." <<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type_ = other.type_;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal has been destructed." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WRONGaaaaaaaaaaaaaa" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return type_;
}
