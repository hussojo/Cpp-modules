/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:32 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/28 10:37:40 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog constructor called with " << type << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &other)
{
}

Dog &Dog::operator=(const Dog &other)
{
	// TODO: insert return statement here
}

Dog::~Dog()
{
}
