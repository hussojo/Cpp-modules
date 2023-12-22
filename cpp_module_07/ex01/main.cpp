#include "Iter.hpp"

void printInt(int i)
{
    std::cout << i << std::endl;
}

void toUpper(char c)
{
    c = toupper(c);
    std::cout << c << std::endl;
}

int main()
{
    {
        int arr[] = {1, 2, 3, 4, 5};
        iter(arr, 5, printInt);
    }
    std::cout << "------------" << std::endl;
    {
        char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
        iter(arr, 11, toUpper);
    }
    return 0;
}

