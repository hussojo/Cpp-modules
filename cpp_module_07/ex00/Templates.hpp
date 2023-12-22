#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>
#include <string>

/* swap: Swaps the values of two given arguments. Does not return anything.*/
template <typename T>
void swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp; 
}


/* min: Compares the two values passed in its arguments and returns the smallest
one. If the two of them are equal, then it returns the second one. */
template <typename T>
T min(T a, T b)
{
    if (a < b)
        return a;
    else
        return b;
}


/* max: Compares the two values passed in its arguments and returns the greatest one.
If the two of them are equal, then it returns the second one. */
template <typename T>
T max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}



#endif