/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:32 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/01 10:26:36 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type_ = "Dog";
	brain = new Brain();
	std::cout << type_ << " has been constructed with new ideas." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	brain = new Brain();
	std::cout << "Dog copy constructor has been called." <<std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type_ = other.type_;
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog and his ideas have been destructed." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wuf Wuf Wuf Wuf" << std::endl;
}

void Dog::setIdea(unsigned int i, std::string &idea)
{
	if (i >= 0 && i <100)
		brain->ideas[i] = idea;
	else
		std::cout << "Dog brain not big enough! (index out of range)" << std::endl;
}

std::string Dog::getIdea(unsigned int i) const
{
	if (i >= 0 && i <100)
		return brain->ideas[i];
	else
	{
		std::cout << "Dog brain not big enough! (index out of range)" << std::endl;
		return "";
	}
}
