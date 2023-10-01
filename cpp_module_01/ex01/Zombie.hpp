/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:30:44 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/01 12:37:12 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define	ZOMBIE_H

#include <string>
#include <iostream>

class	Zombie {
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void	setName(std::string name);
	void	announce(void);
} ;

Zombie* zombieHorde(int N, std::string name);

#endif
