#include "Array.hpp"

template <class T>
inline Array<T>::Array() : _size(0), _array(NULL)
{
    //std::cout << "Default constructor called" << std::endl;
}

/*
takes an unsigned integer n as a parameter. It initializes _size to 
and _array to a new array of T with size n. The () after new T[n]
value-initializes the elements of the array
(i.e., they are set to zero or the equivalent for T).
*/
template <class T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n]()) {}

template <class T>
Array<T>::Array(const Array<T> &other) : _size(other._size), _array(new T[other._size])
{
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = other._array[i];
}

template <class T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
    if (this != &other)
    {
        delete[] _array;
        _size = other._size;
        _array = new T[other._size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = other._array[i];
    }
    return *this;
}

template <class T>
Array<T>::~Array()
{
    //std::cout << "Destructor called" << std::endl;
}


//     try {
//      }
//      throw std::out_of_range("Index out of range");
