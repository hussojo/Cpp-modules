/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 07:55:49 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/02 09:17:18 by jhusso           ###   ########.fr       */
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
	_brain = new Brain(*other._brain);
	std::cout << "Cat copy constructor has been called." <<std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	_brain = new Brain(*other._brain);
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

Brain& Cat::getBrain() const
{
	return *_brain;
}
