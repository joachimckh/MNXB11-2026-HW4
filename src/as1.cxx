#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

// Change from void to int because void doesn't return anythinh
int AddOneRef(int &x) { 
    return x + 1; 
}

bool isOdd(int x) { return false; }

int floatToInt(float x) { return 0; }

int factorial(int n) { return 0; }

}; // namespace homework
