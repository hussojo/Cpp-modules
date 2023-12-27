#include "Templates.hpp"

int main( void ) {
std::cout << "---------- INT TESTS ----------" << std::endl;
int a = 2;
int b = 3;
std::cout << "before swap:\ta = " << a << ", b = " << b << std::endl;
::swap( a, b );
std::cout << "after swap:\ta = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

std::cout << "---------- DOUBLE TESTS ----------" << std::endl;
double e = 42.2;
double f = 4.3;
std::cout << "before swap:\te = " << e << ", f = " << f << std::endl;
::swap( e, f );
std::cout << "after swap:\te = " << e << ", f = " << f << std::endl;
std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

std::cout << "---------- FLOAT TESTS ----------" << std::endl;
double g = 15.15f;
double h = 4.8f;
std::cout << "before swap:\tg = " << g << ", h = " << h << std::endl;
::swap( g, h );
std::cout << "after swap:\tg = " << g << ", h = " << h << std::endl;
std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

std::cout << "---------- CHAR TESTS ----------" << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
std::cout << "before swap:\tc = " << c << ", d = " << d << std::endl;
::swap(c, d);
std::cout << "after swap:\tc = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}

