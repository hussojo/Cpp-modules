/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:16:00 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/19 14:49:41 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "Weapon constructor called with " << type << std::endl;
	this->type = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called" << std::endl;
}

const std::string& Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}

