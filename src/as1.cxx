#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) {
    ++x;
    std::cout << x << std::endl;
}

bool isOdd(int x) { 
    bool Oddness = false;
    if (x % 2 == 0)
    {Oddness = false;}
    else {Oddness = true;}
    return Oddness;
}

int floatToInt(float x) { 
    int Casted = static_cast<int>(x);
    return Casted;
    std::cout << Casted << std::endl; 
}

int factorial(int n) { 
    int f = 1, i;
    if (n < 0)
        return f = -1;
    else
        for (i = 2; i<= n; ++i)
            f *= i;
        return f;
    std::cout << f << std::endl;
}

}; // namespace homework
