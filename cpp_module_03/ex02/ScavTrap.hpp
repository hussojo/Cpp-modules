/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:56:50 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/28 15:51:10 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ScavTrap);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& scavtrap);

	void attack(const std::string& target);
	void guardGate();

	// FOR DEFENCE
	// int getHealth(void) const;
	// int getEnergy(void) const;
	// int getDamage(void) const;
} ;

#endif
