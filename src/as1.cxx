#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) {
     ++x; 
}

bool isOdd(int x) { 
    return x % 2 != 0; 
}

int floatToInt(float x) { 
    return static_cast<int>(x); 
}

int factorial(int n) { 
    // Case 1: Negative argument
    if (n < 0) {
        return -1;
    }

    // Case 2: Null argument
    if (n == 0) {
        return 1;
    }
    
    // Case 3: Positive argument
    if (n > 0) {
        return n * factorial(n - 1);
    }
}

}; // namespace homework
