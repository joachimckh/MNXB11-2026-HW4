#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

int AddOneRef(int &x) { return ++x; }

bool isOdd(int x) { 
    return x % 2 != 0;
 }

int floatToInt(float x) { 
    return (int)x; 
}

int factorial(int n) { 
    if (n < 0) {
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

}; // namespace homework
