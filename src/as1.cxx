#include "as1.hpp"
#include <iostream>

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { 
    ++x;
    return; }

bool isOdd(int x) { 
    return x % 2; }

int floatToInt(float x) { 
    x = static_cast<int>(x);
    return x; }

int factorial(int n) { 
    if (n < 0){
        return -1;
    }
    int result{1};
    int& resultRef{result};
    for (int i{1} ; i <= n ; ++i){
        resultRef *= i;
    }
    return result; }

}; // namespace homework
