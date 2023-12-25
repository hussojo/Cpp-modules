#include "Array.hpp"

int main( void )
{
    try
    {
        int * a = new int();
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}


// Tip: Try to compile int * a = new int(); then display *a.
// test deep copy