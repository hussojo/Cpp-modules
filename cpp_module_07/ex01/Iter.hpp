#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename F>
void iter(T *array, int arrlen, F func)
{
	for (int i = 0; i < arrlen; i++)
		func(array[i]);
}

#endif
