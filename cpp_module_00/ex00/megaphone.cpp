/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:51:24 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/20 07:12:54 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;

	if (ac >= 2)
	{
		for (i = 1; i < ac; i++)
		{
			for (size_t j = 0; j < strlen(av[i]); j++)
				av[i][j] = toupper(av[i][j]);
			std::cout << av[i] << " " << std::flush;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
