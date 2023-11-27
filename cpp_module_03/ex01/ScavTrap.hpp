/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:56:50 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/27 15:32:06 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ScavTrap);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& scavtrap);

	void attack(const std::string& target);
	void guardGate();
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);
	int getHealth(void) const;
	int getEnergy(void) const;
	int getDamage(void) const;

private:
	std::string name;
	unsigned int health;
	unsigned int energy;
	unsigned int damage;
} ;

#endif
