/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:38:24 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/29 14:22:53 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Deffi"), health(10), energy(10), damage(0)
{
	std::cout << name << " called default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), health(10), energy(10), damage(0)
{
	std::cout << "Name constructor called with " << name << std::endl;
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
	this->name = claptrap.name;
	this->health = claptrap.health;
	this->energy = claptrap.energy;
	this->damage = claptrap.damage;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (energy > 0 && health > 0)
	{
		energy--;
		std::cout << "ClapTrap " << name << " attacks " << target <<
		", causing " << damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "No more attack or energy points! Can't attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (energy > 0 && health > 0)
	{
		health -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "No more attack or energy points! Can't take damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy > 0 && health > 0)
	{
		energy--;
		health += amount;
		std::cout << "ClapTrap " << name << " repairs it self." << std::endl;
	}
	else
		std::cout << "No more attack or energy points! Can't be repaired." << std::endl;

}

std::string ClapTrap::getName(void) const
{
	return name;
}

int ClapTrap::getHealth(void) const
{
	return health;
}

int ClapTrap::getEnergy(void) const
{
	return energy;
}

int ClapTrap::getDamage(void) const
{
	return damage;
}
