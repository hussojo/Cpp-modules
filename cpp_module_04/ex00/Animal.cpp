/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:18:31 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 08:06:38 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() :  type_("Default animal")
{
	std::cout << type_ << " has been constructed." << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->type_ = other.type_;
	std::cout << "Animal copy constructor has been called." <<std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type_ = other.type_;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal has been destructed." << std::endl;
}

std::string Animal::makeSound() const
{
	return ("aaaaaaaaaaaaaa");
}

std::string Animal::getType(void) const
{
	return type_;
}
