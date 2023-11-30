/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 07:55:49 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 13:06:51 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type_ = "WrongCat";
	std::cout << type_ << " has been constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;
	std::cout << "WrongCat copy constructor has been called." <<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->type_ = other.type_;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destructed." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "This sound is not going to show!!!" << std::endl;
}
