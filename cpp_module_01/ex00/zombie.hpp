/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:36:41 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/01 09:43:28 by jhusso           ###   ########.fr       */
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
	void	announce(void);
} ;

#endif
