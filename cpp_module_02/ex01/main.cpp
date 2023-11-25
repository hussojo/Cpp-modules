/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:10:15 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/25 11:16:12 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a; // default constructor
	Fixed const b(10); // integer constructor
	Fixed const c(42.42f); // float constructor
	Fixed const d(b); // copy constructor
	a = Fixed(1234.4321f); // operand = overload

	std::cout << "------------------------------------" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	std::cout << "d is " << d << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;

	return 0;
}
