/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:32 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/02 06:58:24 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type_ = "Dog";
	_brain = new Brain();
	std::cout << type_ << " has been constructed with brain." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	_brain = new Brain();
	std::cout << "Dog copy constructor has been called." <<std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type_ = other.type_;
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog and his ideas have been destructed." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wuf Wuf Wuf Wuf" << std::endl;
}
