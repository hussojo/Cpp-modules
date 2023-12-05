/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:32 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 12:14:35 by jhusso           ###   ########.fr       */
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

void Dog::makeSound() const
{
	std::cout << "Wuf Wuf Wuf Wuf" << std::endl;
}

