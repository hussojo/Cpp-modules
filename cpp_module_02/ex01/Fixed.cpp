/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:10:01 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/25 11:10:45 by jhusso           ###   ########.fr       */
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

Fixed::Fixed(const int i) : value(i << bits)
{
	std::cout << "Int constructor called" << std::endl;
	// std::cout << i << std::endl;
	// std::cout << (i << bits) << std::endl;
	// std::cout << "-----------------------------" << std::endl;
}

/*
Float constructor takes in a constant floating-point number and
converts it respectfully to fixedpoint value. With using roundf
we make sure that the class member value holds an integer value.
*/
Fixed::Fixed(const float f) : value(roundf(f * (1 << bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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


/*
Converts fixed point values to floating point values
*/
float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (1 << bits));
}


int Fixed::toInt(void) const
{
	return value >> bits;
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

/*
inserts a floating-point representation
of the fixed-point number into the output
stream object passed as parameter.
*/
std::ostream& operator<<(std::ostream& outs, const Fixed& fixed)
{
	return outs << fixed.toFloat();
}
