/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:35:46 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/25 14:04:34 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed& fixed);
	Fixed(const int i);
	Fixed(const float f);
	~Fixed();

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	// COMPARISON OPERATORS
	Fixed&	operator=(const Fixed& fixed);
	bool	operator>(const Fixed& fixed) const;
	bool	operator<(const Fixed& fixed) const;
	bool	operator>=(const Fixed& fixed) const;
	bool	operator<=(const Fixed& fixed) const;
	bool	operator==(const Fixed& fixed) const;
	bool	operator!=(const Fixed& fixed) const;

	// ARITHMETIC OPERATORS
	Fixed	operator+(const Fixed& fixed) const;
	Fixed	operator-(const Fixed& fixed) const;
	Fixed	operator*(const Fixed& fixed) const;
	Fixed	operator/(const Fixed& fixed) const;

	// INCREMENT-DECREMENT OPERATORS
	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	// MIN MAX
	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed& max(const Fixed& a, const Fixed& b);
	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& min(const Fixed& a, const Fixed& b);

private:
	int value;
	static const int bits = 8;
} ;

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
