/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:56:50 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/29 14:29:42 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

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
} ;

#endif
