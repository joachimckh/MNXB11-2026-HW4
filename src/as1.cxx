#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { x = x + 1; }

bool isOdd(int x) { 
    
    int rem = x % 2;
    if (rem ==0){ return false;}

    else {
    return true; }
}

int floatToInt(float x) { 
    
    return static_cast<int>(x); 
       }


int factorial(int n) { 
    
    if (n<0){ 
        return -1;}

int result = 1;
for (int i = 2; i <= n; i++){
    result *=i;
}
    return result;

}

}; // namespace homework
