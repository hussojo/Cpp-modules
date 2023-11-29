/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:52:49 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/29 14:18:42 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a; // default constructor
	ClapTrap Mikko("Mikko"); // name constructor
	std::cout << Mikko.getName() << " stats:" << std::endl;
	std::cout << Mikko.getHealth() << std::endl;
	std::cout << Mikko.getEnergy() << std::endl;
	std::cout << Mikko.getDamage() << std::endl;
	std::cout << "-----------------------------" << std::endl;
	// ClapTrap Seppo(Mikko); // copy constructor
	// std::cout << Seppo. getName() << " stats:" << std::endl;
	// std::cout << Seppo.getHealth() << std::endl;
	// std::cout << Seppo.getEnergy() << std::endl;
	// std::cout << Seppo.getDamage() << std::endl;
	// std::cout << "-----------------------------" << std::endl;
	Mikko.attack("Pekka");
	Mikko.takeDamage(5);
	Mikko.beRepaired(1);
}
