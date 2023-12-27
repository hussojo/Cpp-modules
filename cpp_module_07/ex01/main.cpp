#include "Iter.hpp"

template <typename T>
void printArr(T val)
{
    std::cout << val << std::endl;
}

int main()
{
    //testfor int array
    {
        int arr[] = {1, 2, 3, 4, 5};
        iter(arr, 5, printArr<int>);
    }
    std::cout << "------------" << std::endl;
    // test for float array
    {
        float arr[] = {3.446322f, 5.22221f, 1.15443f, 78.858585f};
        iter(arr, 4, printArr<float>);
    }
    std::cout << "------------" << std::endl;
    // test for char array
    {
        char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
        iter(arr, 11, printArr<char>);
    }
    return 0;
}

