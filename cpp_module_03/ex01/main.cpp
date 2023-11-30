/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:52:49 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 13:09:39 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Mikko("Mikko"); // "name" constructor
	// std::cout << Mikko.getName() << std::endl;
	ScavTrap Pekka("Pekka"); // "name" constructor
	// std::cout << Pekka.getName() << std::endl;
	// ScavTrap Maija(Pekka);
	// std::cout << Maija.getName() << std::endl;
	// ScavTrap Pekka(Mikko); // copyconstructor
	// std::cout << "---------------------------------------------------------\n";
	// Mikko.attack("Pekka");
	// Pekka.takeDamage(20);
	// std::cout << "Mikko health: " << Mikko.getHealth() << std::endl;
	// std::cout << "Mikko energy: " << Mikko.getEnergy() << std::endl;
	// std::cout << "Pekka health: " << Pekka.getHealth() << std::endl;
	// std::cout << "Pekka energy: " << Pekka.getEnergy() << std::endl;
	// std::cout << "---------------------------------------------------------\n";
	// Pekka.attack("Mikko");
	// Mikko.takeDamage(20);
	// std::cout << "Mikko health: " << Mikko.getHealth() << std::endl;
	// std::cout << "Mikko energy: " << Mikko.getEnergy() << std::endl;
	// std::cout << "Pekka health: " << Pekka.getHealth() << std::endl;
	// std::cout << "Pekka energy: " << Pekka.getEnergy() << std::endl;
	// std::cout << "---------------------------------------------------------\n";
	// Mikko.beRepaired(20);
	// Mikko.guardGate();
	// std::cout << "Mikko health: " << Mikko.getHealth() << std::endl;
	// std::cout << "Mikko energy: " << Mikko.getEnergy() << std::endl;
	// std::cout << "---------------------------------------------------------\n";
	// Pekka.beRepaired(20);
	// Pekka.guardGate();
	// std::cout << "Pekka health: " << Pekka.getHealth() << std::endl;
	// std::cout << "Pekka energy: " << Pekka.getEnergy() << std::endl;
	std::cout << "---------------------------------------------------------\n";
}
