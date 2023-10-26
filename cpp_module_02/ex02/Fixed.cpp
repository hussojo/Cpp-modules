/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:36:17 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/26 11:24:14 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
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

/*
Converts integer values to floating point values
*/
int Fixed::toInt(void) const
{
	return value >> bits;
}

// COMPARISON OPERATORS
// prints out either true (1) or false (0)

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	if (this != &fixed)
	{
		std::cout << "Copy assignment operator called" << std::endl;
			value = fixed.value;
	}
	return *this;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return this->value > fixed.value;
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return this->value < fixed.value;
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return this->value >= fixed.value;
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return this->value <= fixed.value;
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return this->value == fixed.value;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return this->value != fixed.value;
}

// ARITHMETIC OPERATORS
// these methods return a new Fixed object that is the result of the operation

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return Fixed(this->toFloat() / fixed.toFloat());
}


//
std::ostream& operator<<(std::ostream& outs, const Fixed& fixed)
{
	return outs << fixed.toFloat();
}
