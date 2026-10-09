#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) {
    x += 1;
}

bool isOdd(int x) { 
    if (x % 2 ==0){
        return false;
    }
    else {
        return true;
    }  
}

int floatToInt(float x) { 
    int a = static_cast<int>(x);
    return a; }

int factorial(int n) { 
    if (n < 0){
        return -1;
    }
    else if (n==0){
        return 1;
    }
    else {
        int fac = 1;
        for (int i=1; i<(n+1); i++){
            fac *= i;
        }
        return fac;
    }
}
}; // namespace homework
