#include "Array.hpp"

int main( void )
{
    try
    {
        int * a = new int();
        std::cout << *a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}


// Tip: Try to compile int * a = new int(); then display *a.
// creating a pointer to integer and displaying value: value-initialized to zero
// -> what should happen in parametrisized constructor

// test deep copy