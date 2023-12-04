/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:13:00 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/04 11:19:30 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria {
public:
	AMateria();
	AMateria(std::string const & type); //parameterisized constructor
	AMateria(const AMateria &other); //copy constructor
	AMateria& operator=(const AMateria &other);
	~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string type_;
} ;

// std::ostream&	operator<<(std::ostream& os, const AMateria& amateria);

#endif
