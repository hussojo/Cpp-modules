/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:57:12 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/28 15:51:46 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called with " << name << std::endl;
	health = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	if (this != &scavtrap)
	{
		this->name = scavtrap.name;
		this->health = scavtrap.health;
		this->energy = scavtrap.energy;
		this->damage = scavtrap.damage;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (energy > 0 && health > 0)
	{
		energy--;
		std::cout << "ScavTrap " << name << " attacks " << target <<
		", causing " << damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap has no more attack or energy points!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now keeping the Gate!" << std::endl;
}

// int ScavTrap::getHealth(void) const
// {
// 	return health;
// }

// int ScavTrap::getEnergy(void) const
// {
// 	return energy;
// }

// int ScavTrap::getDamage(void) const
// {
// 	return damage;
// }

