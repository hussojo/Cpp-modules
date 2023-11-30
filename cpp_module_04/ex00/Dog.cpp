/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:32 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 07:23:10 by jhusso           ###   ########.fr       */
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
<<<<<<< HEAD
	this->type_ = other.type_;
=======
	if (this > &other)
		this->type = other.type;
>>>>>>> 109616f55d3bc2b72abee76b39ac527bb60a2d41
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog has been destructed." << std::endl;
}
