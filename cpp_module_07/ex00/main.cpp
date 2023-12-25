#include "Templates.hpp"

/*

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}

*/
/*
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:54:54 by corellan          #+#    #+#             */
/*   Updated: 2023/07/18 09:54:57 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int			a;
	int			b;
	char		c;
	char		d;
	float		e;
	float		f;

	a = 1;
	b = 42;
	c = 'a';
	d = 'z';
	e = 3.14;
	f = 6.28;

	std::cout << "The values of the integers a and b are " << a << " and " << b << " respectively." << std::endl;
	::swap<int>(a, b);
	std::cout << "The values of the integers a and b after swaping them are " << a << " and " << b << " respectively." << std::endl << std::endl;

	std::cout << "The characters c and d are " << c << " and " << d << " respectively." << std::endl;
	::swap<char>(c, d);
	std::cout << "The characters c and d after swaping them are " << c << " and " << d << " respectively." << std::endl << std::endl;

	std::cout << "The values of the floating-point nunbers e and f are " << e << " and " << f << " respectively." << std::endl;
	::swap<float>(e, f);
	std::cout << "The values of the floating-point numbers e and f after swaping them are " << e << " and " << f << " respectively." << std::endl << std::endl;

	std::cout << "The max value between the integers a and b is " << ::max<int>(a, b) << std::endl;
	std::cout << "The min value between the integers a and b is " << ::min<int>(a, b) << std::endl << std::endl;

	std::cout << "The max value between the characters c and d is " << ::max<char>(c, d) << std::endl;
	std::cout << "The min value between the characters c and d is " << ::min<char>(c, d) << std::endl << std::endl;

	std::cout << "The max value between the floating-point numbers e and f is " << ::max<float>(e, f) << std::endl;
	std::cout << "The min value between the floating-point numbers e and f is " << ::min<float>(e, f) << std::endl << std::endl;

	return (0);
}