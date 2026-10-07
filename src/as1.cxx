#include "as1.hpp"

namespace homework {

void printHello() {
    std::cout << "Hello, World!" << std::endl; 
}

void AddOneRef(int &x) {
    std::cout << ++x << std::endl ; 
    return ; }

bool isOdd(int x) {
    if (x % 2 == 0){
    return false;
    } 
    else 
    return true;
}

int floatToInt(float x) { 
    int i = static_cast<int>(x);
    return i;
}

int factorial(int n) {
    
    if (n < 0){
        return -1;
    }
    if (n == 0) {
        return 1;
    }
    
    return n * factorial(n - 1);
}

}; // namespace homework
