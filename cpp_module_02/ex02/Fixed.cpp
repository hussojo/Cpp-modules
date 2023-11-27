/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:36:17 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/27 07:17:06 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) : value(fixed.value)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i) : value(i << bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : value(roundf(f * (1 << bits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	if (this != &fixed)
	{
		// std::cout << "Copy assignment operator called" << std::endl;
			value = fixed.value;
	}
	return *this;
}

// prints out either true (1) or false (0)

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

// INCREMENT-DECREMENT OPERATORS
Fixed& Fixed::operator++()
{
	this->value += 1 << (bits - 1);
	return *this;
}

Fixed &Fixed::operator--()
{
	this->value -= 1 << (bits - 1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++(*this);
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);
	return temp;
}

//MIN MAX

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return b;
	else
		return a;
}

Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (Fixed&)b;
	else
		return (Fixed&)a;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (Fixed&)a;
	else
		return (Fixed&)b;
}

std::ostream& operator<<(std::ostream& outs, const Fixed& fixed)
{
	return outs << fixed.toFloat();
}
