/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:17:30 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/01 12:27:50 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *Horde = zombieHorde(7, "Zomppa");
	for (int i = 0; i < 7; i++)
	{
		Horde[i].announce();
	}
	delete[] Horde;
}
