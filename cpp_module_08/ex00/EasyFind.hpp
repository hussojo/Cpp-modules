#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <vector>
#include <list>
#include <deque>
#include <iostream>

template <typename T>
typename T::iterator easyfind(T &a, int b)
{
	typename T::iterator it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
		throw std::runtime_error("Value not found in the given container.");
	return it;
}

#endif
