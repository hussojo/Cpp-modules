#include "Array.hpp"
/*
template <class T>
Array<T>::Array() : _size(0), _array(NULL)
{
    std::cout << "Default constructor called" << std::endl;
}

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
T &Array<T>::operator[](int index)
{
    if (index >= 0 && index < _size)
        return _array[index];
    else
        throw std::out_of_range("Index out of range");

}

template <class T>
Array<T>::~Array()
{
    std::cout << "Destructor called" << std::endl;
}

template <class T>
size_t Array<T>::size() const
{
    return _size;
}


*/