/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:18:31 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/01 12:14:31 by jhusso           ###   ########.fr       */
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

void Animal::makeSound() const
{
	std::cout << "aaaaaaaaaaaaaa" << std::endl;
}

std::string Animal::getType(void) const
{
	return type_;
}

void Animal::setIdea(unsigned int i, std::string ideas) const
{
	static_cast<void>(i);
	static_cast<void>(ideas);
}

std::string Animal::getIdea(unsigned int i) const
{
	static_cast<void>(i);
	return "";
}
