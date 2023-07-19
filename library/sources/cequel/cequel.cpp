#include <cequel/cequel.hpp>


long Factorial(int n) {
    if(n > 0) return Factorial(n - 1) * n;
    return 1;
}