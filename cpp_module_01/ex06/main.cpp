/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:34:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/10 18:04:01 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::string level;

	std::cout << "Which level you want Harl to complain?"
	std::cout << "Choose a number:" << std::endl;
	std::cout << "1 debug" << std::endl;
	std::cout << "2 info" << std::endl;
	std::cout << "3 warning" << std::endl;
	std::cout << "4 error" << std::endl;
	std::cin >> level;
	int nro = std::stoi(level);

	switch (nro)
	{
		case 1:
			harl.complain("DEBUG");
		case 2:
			harl.complain("INFO");
		case 3:
			harl.complain("WARNING");
		case 4:
			harl.complain("ERROR");
	}
}
