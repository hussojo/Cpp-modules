/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:40:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/09 08:20:46 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl ()
{
	this->funcPointer = &(Harl::debug);
}

Harl::~Harl ()
{

}

void	complain(std::string level)
{
	switch (level)
	{
	case level == 1:

		break;

	default:
		break;
	}
}
