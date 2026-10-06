#include "as1.hpp"

namespace homework {

//Asignment 1
void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { x = x + 1; }

bool isOdd(int x) {if (x % 2 == 0) {return false;} else {return true;}}

int floatToInt(float x) { return static_cast<int>(x); }

int factorial(int n) {if (n < 0) {return -1;} if (n == 0 || n == 1) {return 1;} else {return n * factorial (n - 1);} }

}; // namespace homework
