#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &a, int b)
{
	if (std::find(a.beging(), a.end(), b) == a.end())
		throw ;
}

/*
Write a function template easyfind that accepts a type T. It takes two parameters.
The first one has type T and the second one is an integer.

Assuming T is a container of integers, this function has to find the first occurrence
of the second parameter in the first parameter.

If no occurrence is found, you can either throw an exception or return an error value
of your choice. If you need some inspiration, analyze how standard containers behave
*/

#endif