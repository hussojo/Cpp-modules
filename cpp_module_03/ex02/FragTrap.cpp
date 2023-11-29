/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 07:23:39 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/29 12:25:35 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called with " << name << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = fragtrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	if (this != &fragtrap)
	{
		this->name = name;
		this->health = health;
		this->energy = energy;
		this->damage = damage;
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " wants to give a high five to everyoone!"
	<< std::endl;
}
