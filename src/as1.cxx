#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { x += 1; }

bool isOdd(int x) { 
    
    if ( x % 2 == 0) {
        return false;
    } 
    else {
        return true;
    }
}

int floatToInt(float x) { 
    
    int y = static_cast<int>(x);

    return y; 

}

int factorial(int n) { 

    if (n > 0) {

        int x{1};
        for (int i = 2; i < n+1; i++) { x *= i; }
        return x;

    }

    else if (n == 0) { return 1; }

    else { return -1; }

}

}; // namespace homework
