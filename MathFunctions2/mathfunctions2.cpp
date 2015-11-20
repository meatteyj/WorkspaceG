#include "mathfunctions2.h"


MathFunctions2::MathFunctions2()
{
}
unsigned long MathFunctions2::factorial(unsigned int n){
    switch(n){
    case 0: return 0;
    case 1: return 1;
    default: return n * factorial(n-1);
    }
}
