/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:34:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/20 09:48:22 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	give_instructions()
{
	std::cout << "Filter Harls level of complaining by writing one of these levels "
				<< "after executable: DEBUG, INFO, WARNING, ERROR." << std::endl;
}

int main(int ac, char *av[])
{
	Harl harl;
	int level;

	if (ac == 2)
	{
		if (strcmp(av[1], "DEBUG") == 0)
			level = 1;
		else if (strcmp(av[1], "INFO") == 0)
			level = 2;
		else if (strcmp(av[1], "WARNING") == 0)
			level = 3;
		else if (strcmp(av[1], "ERROR") == 0)
			level = 4;
		else
			level = 5;
		switch (level)
		{
			case 1:
				harl.complain("DEBUG");
			case 2:
				harl.complain("INFO");
			case 3:
				harl.complain("WARNING");
			case 4:
				harl.complain("ERROR");
			case 5:
				std::cout << "[Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	else
		give_instructions();

	return 0;
}
