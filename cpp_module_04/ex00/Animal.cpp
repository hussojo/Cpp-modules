/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:18:31 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 07:26:05 by jhusso           ###   ########.fr       */
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
<<<<<<< HEAD
	if (this != &other)
		this->type_ = other.type_;
=======
	if (this > &other)
		this->type = other.type;
>>>>>>> 109616f55d3bc2b72abee76b39ac527bb60a2d41
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal has been destructed." << std::endl;
}

void Animal::makeSound()
{
	std::cout << "Default animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return type_;
}
