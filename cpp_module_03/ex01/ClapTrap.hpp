/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:32:12 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/29 12:20:32 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& claptrap);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& claptrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;
	int getHealth(void) const;
	int getEnergy(void) const;
	int getDamage(void) const;

protected:
	std::string name;
	unsigned int health;
	unsigned int energy;
	unsigned int damage;
} ;

#endif
