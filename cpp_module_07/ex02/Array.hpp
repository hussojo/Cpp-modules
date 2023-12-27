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


template <class T>
Array<T>::Array() : _size(0), _array(NULL)
{
    std::cout << "Default constructor called" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n]())
{
    std::cout << "Parametrisized constructor called" << std::endl;
}

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

#endif

/*
Develop a class template Array that contains elements of type T and that implements
the following behavior and functions:
• Construction with no parameter: Creates an empty array.
• Construction with an unsigned int n as a parameter: Creates an array of n elements
initialized by default.
Tip: Try to compile int * a = new int(); then display *a.
• Construction by copy and assignment operator. In both cases, modifying either the
original array or its copy after copying musn’t affect the other array.
• You MUST use the operator new[] to allocate memory. Preventive allocation (allocating memory in advance) is forbidden. Your program must never access nonallocated memory.
• Elements can be accessed through the subscript operator: [ ].
• When accessing an element with the [ ] operator, if its index is out of bounds, an
std::exception is thrown.
• A member function size() that returns the number of elements in the array. This
member function takes no parameter and musn’t modify the current instance.
As usual, ensure everything works as expected and turn in a main.cpp file that contains your tests.
*/


