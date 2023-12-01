/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 07:55:49 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 12:51:10 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type_ = "Cat";
	std::cout << type_ << " has been constructed." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;
	std::cout << "Cat copy constructor has been called." <<std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type_ = other.type_;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat has been destructed." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Mau Mau Mau Mau" << std::endl;
}
