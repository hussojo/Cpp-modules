/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 07:23:42 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/28 09:19:24 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& fragtrap);
	~FragTrap();
	FragTrap& operator=(const FragTrap& fragtrap);

	void highFivesGuys(void);

	// FOR DEFENCE
	// int getHealth(void) const;
	// int getEnergy(void) const;
	// int getDamage(void) const;
} ;

#endif

