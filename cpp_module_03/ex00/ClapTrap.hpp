/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:32:12 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/27 14:31:03 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& claptrap);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& claptrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	// int getHealth(void) const;
	// int getEnergy(void) const;
	// int getDamage(void) const;

private:
	std::string name;
	unsigned int health;
	unsigned int energy;
	unsigned int damage;
} ;

#endif
