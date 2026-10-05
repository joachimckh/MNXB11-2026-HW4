#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { 
    x = x + 1; 
    return;
}

bool isOdd(int x){
    x = abs(x);
    if (x % 2 == 1)
        return true;
    else 
        return false;
}


int floatToInt(float x) { 
    static_cast<int>(x);
    return x; 
}

int factorial(int n) { 
    if (n >= 0) { 
        int f = 1;
        int i = 1;
        while(i <= n){
            f = f*i;
            i = i+1;
        }
        return f;
    }
    else 
        return -1;
}

}; // namespace homework
