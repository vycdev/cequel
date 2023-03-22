#include <cequel/cequel.hpp>

void foo()
{
    // Empty
}

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}
