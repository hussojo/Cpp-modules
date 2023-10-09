/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:34:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/09 07:48:05 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string level;
	std::cout << "What level is Harl complaining?" << std::endl;
	std::cout << "Choose number:" << std::endl;
	std::cout << "1 debug" << std::endl;
	std::cout << "2 info" << std::endl;
	std::cout << "3 warning" << std::endl;
	std::cout << "4 error" << std::endl;
	std::cin >> level;
}
