/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:29:46 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/25 10:20:53 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main(void)
// {
// 	Fixed a; // default constructor -> the value of Fixed class called a is set to 0
// 	Fixed b(a); // copy constructor
// 	Fixed c; // default constructor

// 	c = b; // testing the cpy assigment operator

// 	std::cout << a.getRawBits() << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;
// 	return 0;
// }


int main(void)
{
	std::cout << "---------------------------------" << std::endl;
	Fixed fix1; // default constructor -> the value of Fixed class called a is set to 0
	std::cout << fix1.getRawBits() << std::endl;

	std::cout << "---------------------------------" << std::endl;
	Fixed fix2(fix1); // copy constructor
	std::cout << fix2.getRawBits() << std::endl;
	fix2.setRawBits(42);
	std::cout << fix2.getRawBits() << std::endl;

	std::cout << "---------------------------------" << std::endl;
	Fixed fix3; // default constructor
	fix3 = fix2; // testing the cpy assigment operator
	std::cout << fix3.getRawBits() << std::endl;

	std::cout << "---------------------------------" << std::endl;
	return 0;
}
