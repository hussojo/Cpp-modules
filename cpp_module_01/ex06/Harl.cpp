/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:40:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/20 09:42:15 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl ()
{
	// std::cout << "Constructor called!" << std::endl;
	this->funcArr[0] = &Harl::debug;
	this->funcArr[1] = &Harl::info;
	this->funcArr[2] = &Harl::warning;
	this->funcArr[3] = &Harl::error;
}

Harl::~Harl ()
{
	// std::cout << "Destructor called!" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup burger."
	<< " I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger! "
	<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	<< "I’ve been coming for years "
	<< "whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	size_t i = 0;
	size_t level_count = 4;
	while (i < level_count)
	{
		if(!levels[i].compare(level))
			(this->*funcArr[i])();
		i++;
	}
}
