#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { 
x++;
}

bool isOdd(int x) { 
    if (x % 2 != 0) {
        return true;
    } else {
        return false;
    }
 }

int floatToInt(float x) { 
    return static_cast<int>(x);
}

int factorial(int n) { 
    if (n < 0) {
        return -1;
    }
    
    if (n == 0 || n == 1) {
        return 1;
    }

    return n*factorial(n - 1);

    /* Solution with for loop */
    
    /*for (int i = n-1; i > 0; i--) {
        n *= i;
    }
    return n; */
 }

}; // namespace homework
