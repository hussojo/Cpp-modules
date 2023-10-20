/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:36:41 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/20 07:35:05 by jhusso           ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
} ;

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
