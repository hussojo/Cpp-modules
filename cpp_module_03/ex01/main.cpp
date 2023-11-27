/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:52:49 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/27 13:15:26 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// int main(void)
// {
// 	ClapTrap Mikko("Mikko");

// 	Mikko.attack("Pekka");

// }

// int main(void)
// {
//     std::cout << "\n-- Default constructors:\n";
//     ClapTrap unnamed;
//     ClapTrap foo("Foo");

//     std::cout << "\n-- Copy constructor\n";
//     ClapTrap bar(foo);

//     std::cout << "\n-- Attack\n";
//     for (int i = 0; i < 11; i++)
//     {
//         std::cout << i << ": foo.attack('Baz'): ";
//         foo.attack("Baz");
//     }
//     std::cout << "Claptraps cannot attack without energy\n";

//     std::cout << "\nfoo = bar: ";
//     foo = bar;

//     std::cout << "\n-- Take damage\n";
//     std::cout << "1: foo.takeDamage(6): ";
//     foo.takeDamage(6);
//     std::cout << "2: foo.takeDamage(6) (only has 4 hitpoints left so damage is reduced):\n\t";
//     foo.takeDamage(6);
//     std::cout << "3: foo.takeDamage(6): ";
//     foo.takeDamage(6);
//     std::cout << "Dead claptraps don't take damage\n";

//     std::cout << "\nfoo = bar: ";
//     foo = bar;

//     std::cout << "\n-- Self repair\n";
//     std::cout << "0: foo.beRepaired(UINT_MAX - 100): ";
//     foo.beRepaired(std::numeric_limits<unsigned int>::max() - 100);
//     std::cout << "1: foo.beRepaired(UINT_MAX): (reduced repair due to numeric limits)\n\t";
//     foo.beRepaired(std::numeric_limits<unsigned int>::max());
//     for (int i = 2; i < 10; i++)
//     {
//         std::cout << i << " : foo.beRepaired(10): ";
//         foo.beRepaired(10);
//     }
//     std::cout << "10: foo.beRepaired(10): Claptraps with no energy cannot heal\n";
//     foo.beRepaired(10);

//     std::cout << "\n-- Returning from main\n";
//     return EXIT_SUCCESS;
// }

int main(void)
{
	ScavTrap scavvy("Scavvy");
	scavvy.guardGate();
	scavvy.attack("Teemu");
	scavvy.takeDamage(40);
	scavvy.beRepaired(20);
	scavvy.attack("June");
	scavvy.takeDamage(70);
	scavvy.attack("Dean");
	scavvy.takeDamage(10);
	// Should not work
	scavvy.beRepaired(20);
	scavvy.attack("Mark");
	return 0;
}
