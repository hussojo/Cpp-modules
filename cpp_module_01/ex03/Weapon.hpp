/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:14:02 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/19 14:49:37 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string type);
	~Weapon();
	const std::string& getType() const;
	void setType(std::string newType);
} ;

#endif
