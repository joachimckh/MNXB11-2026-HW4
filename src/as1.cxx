#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { 
    x=x+1; //add one to the integer, ie 4 becomes 5
} 

bool isOdd(int x) {
     return x % 2!=0;//Returns true if odd and false if even
     } //%calcs remainder from didvision

int floatToInt(float x) {
    return static_cast<int>(x); //converts float to integer ie 3.2->3
 } //Converts a float to an integer

int factorial(int n) {
    if (n<0){
        return -1;
    }
    if (n==0){
        return 1;
    }
    return n * factorial(n-1);
 } 

}; // namespace homework
