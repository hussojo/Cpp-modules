/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 07:55:49 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/01 12:43:25 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type_ = "Cat";
	_brain = new Brain();
	std::cout << type_ << " has been constructed with brain." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;
	_brain = new Brain();
	std::cout << "Cat copy constructor has been called." <<std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type_ = other.type_;
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat has been destructed." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Mau Mau Mau Mau" << std::endl;
}

void Cat::setIdea(unsigned int i, std::string idea) const
{
	if (i >= 0 && i <100)
		_brain->ideas[i] = idea;
	else
		std::cout << "Can't set the idea, Cat don't want so many ideas! (Index out of range)" << std::endl;
}

std::string Cat::getIdea(unsigned int i) const
{
	if (i >= 0 && i <100)
		return _brain->ideas[i];
	else
	{
		std::cout << "Can't get the idea, Cat doesn't have so many ideas! (Index out of range)" << std::endl;
		return "";
	}
}
