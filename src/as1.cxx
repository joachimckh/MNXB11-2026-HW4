#include "as1.hpp"

namespace homework {

void printHello() { 
    std::cout << "Hello, World!" << std::endl; 
}

void AddOneRef(int &x) { 
    x = x + 1; 
    return; 
}

bool isOdd(int x) { 
    if (x % 2 != 0)  
    {
        return true; 
    }
    else
    {
        return false; 
    }
}

int floatToInt(float f) { 
    return static_cast<int>(f); 
}

int factorial(int n) { 
    if (n < 0)
    {
        return -1; 
    }
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n-1); 
}

}; // evve2655 homework
