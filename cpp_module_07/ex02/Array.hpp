#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>


template <class T>
class Array {
	public:
		Array();
		Array(unsigned int size);
		Array(const Array &other);
		Array &operator=(const Array &other);
		T &operator[](int index);
		~Array();
		size_t size() const;

	private:
		int _size;
		T *_array;
} ;

#include "Array.tpp"

#endif


