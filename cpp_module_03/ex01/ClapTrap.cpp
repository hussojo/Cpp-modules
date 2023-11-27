/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:38:24 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/27 14:21:02 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), health(10), energy(10), damage(0)
{
	std::cout << "ClapTrap constructor called with " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) : name(claptrap.name),
health(claptrap.health), energy(claptrap.energy), damage(claptrap.damage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (this != &claptrap)
	{
		std::cout << "ClapTrap copyassigment operator called" << std::endl;
		this->name = claptrap.name;
		this->health = claptrap.health;
		this->energy = claptrap.energy;
		this->damage = claptrap.damage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (energy != 0 && health != 0)
	{
		energy--;
		std::cout << "ClapTrap " << name << " attacks " << target <<
		", causing " << damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "No more attack or energy points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (energy != 0 && health != 0)
	{
	health -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "No more attack or energy points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy != 0 && health != 0)
	{
	energy--;
	health += amount;
	std::cout << "ClapTrap " << name << " repairs it self." << std::endl;
	}
	else
		std::cout << "No more attack or energy points!" << std::endl;

}