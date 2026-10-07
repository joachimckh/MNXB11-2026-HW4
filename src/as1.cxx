#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { 
    x+=1;
    return ; 
}

bool isOdd(int x) {
    if (x<0){x=-x;}
    if (x%2==1){return true;}
    else{return false;}
     }

int floatToInt(float x) { 
    int y=static_cast<int>(x);
    return y; }

int factorial(int n) {
    if (n>0){
        return factorial(n-1)*n;
    }
    else if(n==0) {return 1;} 
    else {return -1;}
}

}; // namespace homework
