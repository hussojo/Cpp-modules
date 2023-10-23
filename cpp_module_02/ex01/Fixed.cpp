/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:10:01 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/23 08:26:19 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) : value(fixed.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i) : value(i)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : value(f)
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	if (this != &fixed)
	{
		std::cout << "Copy assignment operator called" << std::endl;
			value = fixed.value;
	}
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float Fixed::toFloat(void) const
{
	return 0.0f;
}

int Fixed::toInt(void) const
{
	return 0;
}

std::ostream& operator<<(std::ostream& outs, const Fixed& fixed)
{
	return outs << fixed.toFloat();
}
