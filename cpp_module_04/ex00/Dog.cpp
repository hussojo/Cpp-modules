/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:32 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 08:06:51 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type_ = "Dog";
	std::cout << type_ << " has been constructed." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	std::cout << "Dog copy constructor has been called." <<std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type_ = other.type_;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog has been destructed." << std::endl;
}

std::string Dog::makeSound() const
{
	return ("Wuf Wuf Wuf Wuf");
}
